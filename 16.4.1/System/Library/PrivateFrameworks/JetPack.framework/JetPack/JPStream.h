@interface JPStream : NSObject

@property (readonly, nonatomic) struct JetPackStream { } *backing;
@property (readonly, nonatomic) BOOL releaseBackingOnDealloc;

- (id)readData;
- (id)readDataWithLength:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithBacking:(struct JetPackStream { } *)a0 releaseOnDealloc:(BOOL)a1;
- (unsigned long long)readBytes:(char *)a0 length:(unsigned long long)a1;
- (BOOL)writeToFile:(id)a0 blockSize:(unsigned long long)a1 error:(id *)a2;

@end
