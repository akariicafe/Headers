@interface CACGPathCodingProxy : CACodingProxy {
    struct CGPath { } *_path;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithObject:(id)a0;
- (id)decodedObject;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
