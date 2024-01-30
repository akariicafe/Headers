@interface DDRResetOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hideProgress;
@property (nonatomic) BOOL eraseDataPlan;
@property (nonatomic) BOOL disallowProximitySetup;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
