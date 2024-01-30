@class NSUUID, VNPixelBufferObservation, VNRequestSpecifier;

@interface VNFaceGaze : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding> {
    VNRequestSpecifier *_originatingRequestSpecifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *faceObservationUUID;
@property (readonly, nonatomic) long long direction;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly, nonatomic) VNPixelBufferObservation *gazeMask;
@property (readonly, nonatomic) NSUUID *lookedAtFaceObservationUUID;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })locationInTopLeftOrigin:(BOOL)a0 orientation:(unsigned int)a1;

@end
