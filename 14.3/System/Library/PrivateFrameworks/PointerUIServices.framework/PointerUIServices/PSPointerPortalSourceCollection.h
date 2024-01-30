@class PSMatchMoveSource, PSPortalSource;

@interface PSPointerPortalSourceCollection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) PSPortalSource *overlayEffectPortalSource;
@property (readonly, copy, nonatomic) PSPortalSource *pointerPortalSource;
@property (readonly, copy, nonatomic) PSMatchMoveSource *samplingMatchMoveSource;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPointerPortalSource:(id)a0 overlayEffectPortalSource:(id)a1 samplingMatchMoveSource:(id)a2;

@end
