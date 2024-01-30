@class MNGuidanceSignDescription;

@interface MNGuidanceSignInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MNGuidanceSignDescription *primarySign;
@property (readonly, nonatomic) MNGuidanceSignDescription *secondarySign;
@property (readonly, nonatomic) double primaryDistance_SIRI_USE_ONLY;
@property (readonly, nonatomic) double secondaryDistance_SIRI_USE_ONLY;
@property (readonly, nonatomic) double timeUntilPrimarySign_SIRI_USE_ONLY;
@property (readonly, nonatomic) double timeUntilSecondarySign_SIRI_USE_ONLY;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPrimarySign:(id)a0 secondarySign:(id)a1 primaryDistance:(double)a2 secondaryDistance:(double)a3 timeUntilPrimarySign:(double)a4 timeUntilSecondarySign:(double)a5;

@end
