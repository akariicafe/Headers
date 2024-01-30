@class TPSDiscoverabilityTip;

@interface TPKTipContent : TPKContent

@property (readonly, nonatomic) TPSDiscoverabilityTip *tip;

+ (BOOL)supportsSecureCoding;
+ (id)classSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTip:(id)a0 dismissalEvents:(id)a1 customizationID:(long long)a2;

@end
