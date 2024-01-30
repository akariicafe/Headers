@class MNGuidanceSignDescription;

@interface MNGuidanceSignInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MNGuidanceSignDescription *primarySign;
@property (readonly, nonatomic) MNGuidanceSignDescription *secondarySign;
@property (readonly, nonatomic) unsigned long long stepIndex;
@property (readonly, nonatomic) double primaryDistance_SIRI_USE_ONLY;
@property (readonly, nonatomic) double secondaryDistance_SIRI_USE_ONLY;
@property (readonly, nonatomic) double timeUntilPrimarySign_SIRI_USE_ONLY;
@property (readonly, nonatomic) double timeUntilSecondarySign_SIRI_USE_ONLY;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)initWithPrimarySign:(id)a0 secondarySign:(id)a1 stepIndex:(unsigned long long)a2 primaryDistance:(double)a3 secondaryDistance:(double)a4 timeUntilPrimarySign:(double)a5 timeUntilSecondarySign:(double)a6;

@end
