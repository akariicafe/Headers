@class NSNumber, NSFileHandle;

@interface UAFileChunkInputStream : NSInputStream

@property (retain) NSFileHandle *file;
@property (retain) NSNumber *chunkOffset;
@property long long chunkSize;
@property (retain) NSNumber *currentOffset;
@property long long readSize;
@property unsigned long long status;

- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)close;
- (void)open;
- (BOOL)hasBytesAvailable;
- (void).cxx_destruct;
- (id)streamError;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (id)initWithFileHandle:(id)a0 offsetInFile:(id)a1 size:(long long)a2;
- (unsigned long long)streamStatus;
- (id)propertyForKey:(id)a0;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;

@end
