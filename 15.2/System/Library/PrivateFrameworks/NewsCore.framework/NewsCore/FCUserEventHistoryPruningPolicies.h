@class NSArray;

@interface FCUserEventHistoryPruningPolicies : NSObject

@property (retain, nonatomic) NSArray *policies;

+ (id)defaultPolicy;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
