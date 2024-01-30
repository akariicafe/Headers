@class NUPixelFormat, NSString;

@interface NUWrappedBufferStorage : _NUAbstractBufferStorage <NUBuffer, NUMutableBuffer> {
    long long _length;
}

@property (readonly, nonatomic) struct { long long x0; long long x1; } size;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly, nonatomic) long long rowBytes;
@property (readonly, nonatomic) void *bytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) void *mutableBytes;

@end
