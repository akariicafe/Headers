@interface _SerializableCVPixelBuffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCVPixelBufferRef:(struct __CVBuffer { } *)a0;

@end
