@class JFXThreadSafeArray;
@protocol JFXThermalPolicy;

@interface JFXThermalPolicyManager : NSObject

@property (readonly, nonatomic) JFXThreadSafeArray *activePolicies;
@property (readonly, nonatomic) id<JFXThermalPolicy> highestPriorityPolicy;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDefaultPolicy:(id)a0;
- (void)setPolicyType:(Class)a0 active:(BOOL)a1;

@end
