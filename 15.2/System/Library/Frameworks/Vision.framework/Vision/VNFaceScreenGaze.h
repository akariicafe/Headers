@class VNRequestSpecifier;

@interface VNFaceScreenGaze : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding> {
    struct CGPoint { double x; double y; } _screenGaze;
    VNRequestSpecifier *_originatingRequestSpecifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (struct CGPoint { double x0; double x1; })screenGazeRawOutputInCentimeters;

@end
