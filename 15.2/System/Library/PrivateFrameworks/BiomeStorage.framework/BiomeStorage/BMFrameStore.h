@class NSString, NSFileHandle, NSMutableOrderedSet, BMMemoryMapping;

@interface BMFrameStore : NSObject {
    unsigned int _datastoreVersion;
    BMMemoryMapping *_frames;
    BMMemoryMapping *_header;
    unsigned long long _permission;
    double _lastAbsoluteTimestamp;
    unsigned int _usedBytes;
    NSMutableOrderedSet *_framePointers;
}

@property (readonly) unsigned int usedBytes;
@property (copy, nonatomic) NSString *segmentName;
@property (retain, nonatomic) NSFileHandle *backingFile;
@property (readonly, nonatomic) NSString *segmentPath;
@property (readonly, nonatomic) BOOL filterByAgeOnRead;
@property (readonly, nonatomic) BOOL pruneOnAccess;
@property (readonly, nonatomic) double maxAge;
@property (readonly, nonatomic) unsigned long long frameStoreSize;

- (void)sync;
- (struct { unsigned long long x0; double x1; unsigned int x2; char x3[32]; char x4[4]; })segmentHeaderFromFile:(id)a0 withVersion:(unsigned int)a1 fileSize:(unsigned long long *)a2;
- (id)initWithFileHandle:(id)a0 streamPath:(id)a1 filename:(id)a2 maxSize:(unsigned long long)a3 permission:(unsigned long long)a4 datastoreVersion:(unsigned long long)a5;
- (void)enumerateWithOptions:(unsigned long long)a0 fromOffset:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)updateHeader;
- (unsigned char)writeFrameForBytes:(const void *)a0 length:(unsigned long long)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3 outOffset:(unsigned long long *)a4;
- (unsigned char)writeFrameForBytes:(const void *)a0 length:(unsigned long long)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3;
- (id)frameWithOffset:(unsigned long long)a0 expectedState:(unsigned int)a1;
- (void)setPruneOnAccess:(BOOL)a0;
- (void)markFrameAsRemoved:(id)a0;
- (long long)getReverseOffsetIndex:(unsigned long long)a0;
- (void)updateFrameStoreIndex;
- (void)setMaxAge:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned char)appendFrameHeader:(struct { union { struct { unsigned int x0; unsigned int x1; } x0; unsigned long long x1; } x0; struct { double x0; double x1; unsigned int x2; unsigned int x3; } x1; } *)a0 offset:(unsigned long long *)a1;
- (void)setFilterByAgeOnRead:(BOOL)a0;
- (BOOL)expectedTimestamp:(double)a0;
- (void)dealloc;
- (BOOL)isValidFrame:(void *)a0 expectedState:(unsigned int)a1 copyOfData:(id *)a2 frameStatus:(struct { unsigned int x0; unsigned int x1; })a3 validations:(BOOL)a4;
- (BOOL)resizeBackingFileTo:(unsigned long long)a0;
- (void)enumerateFromOffset:(unsigned long long)a0 withCallback:(id /* block */)a1;

@end
