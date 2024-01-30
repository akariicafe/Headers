@interface LKCGImageCodingProxy : CACodingProxy {
    struct CGImage { } *_image;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)decodedObject;
- (void)encodeWithCoder:(id)a0;

@end
