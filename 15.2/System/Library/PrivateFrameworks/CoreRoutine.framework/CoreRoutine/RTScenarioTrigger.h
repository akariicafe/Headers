@interface RTScenarioTrigger : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

+ (id)scenarioTriggerSettledStateToString:(unsigned long long)a0;
+ (id)scenarioTriggerTypeToString:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (unsigned long long)hash;

@end
