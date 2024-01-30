@class NSString, NSMutableOrderedSet, BMFileHandle, BMMemoryMapping;

@interface BMFrameStore : NSObject {
    unsigned int _datastoreVersion;
    BMFileHandle *_backingFile;
    BMMemoryMapping *_frames;
    BMMemoryMapping *_header;
    unsigned long long _permission;
    double _lastAbsoluteTimestamp;
    NSMutableOrderedSet *_framePointers;
}

@property (readonly) unsigned int bytesUsed;
@property (readonly) void *start;
@property (readonly, nonatomic) NSString *segmentName;
@property (readonly, nonatomic) NSString *segmentPath;
@property (nonatomic) BOOL filterByAgeOnRead;
@property (nonatomic) BOOL pruneOnAccess;
@property (nonatomic) double maxAge;
@property (readonly, nonatomic) unsigned long long frameStoreSize;

+ (id)new;

- (void)sync;
- (unsigned char)writeFrameForBytes:(const void *)a0 length:(unsigned long long)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3 outOffset:(unsigned long long *)a4;
- (BOOL)isCheckSumValidAtOffset:(unsigned long long)a0;
- (BOOL)isValidFrame:(void *)a0 expectedState:(unsigned int)a1 copyOfData:(id *)a2 frameStatus:(struct { unsigned int x0; unsigned int x1; })a3 validations:(BOOL)a4 enumerationOptions:(unsigned long long)a5 errorCode:(int *)a6;
- (BOOL)expectedTimestamp:(double)a0;
- (id)initWithFileHandle:(id)a0 maxSize:(unsigned long long)a1 permission:(unsigned long long)a2 datastoreVersion:(unsigned long long)a3;
- (void)enumerateWithOptions:(unsigned long long)a0 fromOffset:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)updateHeader;
- (id)frameWithOffset:(unsigned long long)a0 expectedState:(unsigned int)a1;
- (void)enumerateFromOffset:(unsigned long long)a0 withCallback:(id /* block */)a1;
- (void)dealloc;
- (struct { unsigned long long x0; double x1; unsigned int x2; char x3[32]; char x4[4]; })segmentHeaderFromFile:(id)a0 withVersion:(unsigned int)a1 fileSize:(unsigned long long *)a2;
- (BOOL)resizeBackingFileTo:(unsigned long long)a0;
- (void)updateFrameStoreIndex;
- (unsigned char)appendFrameHeader:(struct { union { struct { unsigned int x0; unsigned int x1; } x0; unsigned long long x1; } x0; struct { double x0; double x1; unsigned int x2; unsigned int x3; } x1; } *)a0 offset:(unsigned long long *)a1;
- (id)init;
- (id)_printablePath;
- (void *)start;
- (unsigned char)writeFrameForBytes:(const void *)a0 length:(unsigned long long)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3;
- (void).cxx_destruct;
- (void)markFrameAsRemoved:(id)a0;
- (long long)getReverseOffsetIndex:(unsigned long long)a0;

@end
