@interface LKCGImageCodingProxy : CACodingProxy {
    struct CGImage { } *_image;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)decodedObject;

@end
