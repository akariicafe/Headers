@class FCUserEventHistoryPruningPolicies;

@interface FCUserEventHistoryTrackingConfiguration : NSObject

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) FCUserEventHistoryPruningPolicies *pruningPolicies;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
