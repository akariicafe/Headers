@class FCUserEventHistoryPruningPolicies;

@interface FCUserEventHistoryTrackingConfiguration : NSObject

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) FCUserEventHistoryPruningPolicies *pruningPolicies;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
