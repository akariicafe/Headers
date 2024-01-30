@interface AFAssistedDisambiguationRules : NSObject

@property (readonly, nonatomic) unsigned long long decisionDepth;
@property (readonly, nonatomic) double decisionAge;
@property (readonly, nonatomic) double decisionThreshold;
@property (readonly, nonatomic) unsigned long long maxPersistenceDepth;
@property (readonly, nonatomic) double maxPersistenceAge;

+ (id)defaultRules;

- (double)weightForEvent:(id)a0;

@end
