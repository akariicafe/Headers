@interface NSMutableData : NSData

@property (readonly) void *mutableBytes;
@property unsigned long long length;

+ (id)dataWithLength:(unsigned long long)a0;
+ (id)dataWithCapacity:(unsigned long long)a0;
+ (id)_newZeroingDataWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_isCompact;
- (void)setLength:(unsigned long long)a0;
- (void)appendData:(id)a0;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBytes:(const void *)a1 length:(unsigned long long)a2;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBytes:(const void *)a1;
- (void)increaseLengthBy:(unsigned long long)a0;
- (void)resetBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void *)mutableBytes;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithLength:(unsigned long long)a0;
- (BOOL)_compressUsingCompressionAlgorithm:(int)a0 error:(id *)a1;
- (BOOL)_decompressUsingCompressionAlgorithm:(int)a0 error:(id *)a1;
- (void)setData:(id)a0;
- (BOOL)decompressUsingAlgorithm:(long long)a0 error:(id *)a1;
- (BOOL)compressUsingAlgorithm:(long long)a0 error:(id *)a1;
- (Class)classForCoder;
- (id)initWithCapacity:(unsigned long long)a0;

@end
