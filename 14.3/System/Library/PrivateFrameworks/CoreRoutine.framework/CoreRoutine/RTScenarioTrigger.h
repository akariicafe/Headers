@interface RTScenarioTrigger : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

+ (id)scenarioTriggerTypeToString:(unsigned long long)a0;
+ (id)scenarioTriggerSettledStateToString:(unsigned long long)a0;

- (id)init;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
