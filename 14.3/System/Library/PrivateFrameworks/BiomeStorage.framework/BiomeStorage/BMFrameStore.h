@class NSString, BMMemoryMapping, NSFileHandle;

@interface BMFrameStore : NSObject {
    unsigned int _datastoreVersion;
    BMMemoryMapping *_frames;
    BMMemoryMapping *_header;
    unsigned long long _permission;
    double _lastAbsoluteTimestamp;
    unsigned int _usedBytes;
}

@property (readonly) unsigned int usedBytes;
@property (copy, nonatomic) NSString *segmentName;
@property (retain, nonatomic) NSFileHandle *backingFile;

+ (struct { unsigned long long x0; double x1; unsigned int x2; char x3[32]; char x4[4]; })segmentHeaderFromFile:(id)a0 withVersion:(unsigned int)a1;

- (void)sync;
- (id)init;
- (void)dealloc;
- (unsigned char)writeFrameForBytes:(const void *)a0 length:(unsigned long long)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3;
- (void)markFrameAsRemoved:(id)a0;
- (void)enumerateFromOffset:(unsigned long long)a0 withCallback:(id /* block */)a1;
- (unsigned char)appendFrameHeader:(struct { union { struct { unsigned int x0; unsigned int x1; } x0; unsigned long long x1; } x0; struct { double x0; double x1; unsigned int x2; unsigned int x3; } x1; } *)a0 offset:(unsigned long long *)a1;
- (id)initWithFileHandle:(id)a0 maxSize:(unsigned long long)a1 permission:(unsigned long long)a2 datastoreVersion:(unsigned long long)a3;
- (BOOL)resizeBackingFileTo:(unsigned long long)a0;
- (void)updateHeader;

@end
