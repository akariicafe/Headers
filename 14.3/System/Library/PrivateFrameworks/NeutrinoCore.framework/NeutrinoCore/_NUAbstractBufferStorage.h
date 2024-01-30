@interface _NUAbstractBufferStorage : _NUAbstractStorage

@property (readonly) long long sizeInBytes;
@property (readonly) long long rowBytes;
@property (readonly) const void *bytes;
@property (readonly) void *mutableBytes;

- (long long)copyFromStorage:(id)a0 region:(id)a1;
- (void *)mutableBytesAtPoint:(struct { long long x0; long long x1; })a0;
- (const void *)bytesAtPoint:(struct { long long x0; long long x1; })a0;

@end
