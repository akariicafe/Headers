@class CNUIDataCollectorAggDLogger, NSString, CNUIDataCollectorSGLogger;

@interface CNUIDataCollector : NSObject

@property (readonly, nonatomic) CNUIDataCollectorAggDLogger *aggDLogger;
@property (readonly, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) CNUIDataCollectorSGLogger *sgLogger;

+ (id)sharedCollector;
+ (BOOL)isEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (void)logPresentation;
- (void)logSearchUsage;
- (void)logContactActionType:(id)a0 attributes:(id)a1;
- (void)logIndexUsage;
- (void)_reallyLogIndexUsage;
- (void)logSearchResultsFetchedSuggested:(BOOL)a0;
- (void)logSearchResultSelected:(id)a0;
- (void)logRefreshUsage;
- (void)logGroupsShown:(long long)a0 totalGroups:(long long)a1;
- (void)logAddProperty:(id)a0 contact:(id)a1;
- (void)logContactShown:(id)a0;
- (void)logContactCreated:(id)a0 originalContact:(id)a1;

@end
