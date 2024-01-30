@interface VGMLImageIOData : VGMLIOData <NSSecureCoding> {
    struct __CVBuffer { } *_pixelBuffer;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (struct __CVBuffer { } *)cvPixelBufferRef;
- (id)initWithCVPixelBufferRef:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)resizeToWidth:(unsigned long long)a0 height:(unsigned long long)a1;

@end
