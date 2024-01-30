@class NSArray;

@interface FCUserEventHistoryPruningPolicies : NSObject

@property (retain, nonatomic) NSArray *policies;

+ (id)defaultPolicy;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
