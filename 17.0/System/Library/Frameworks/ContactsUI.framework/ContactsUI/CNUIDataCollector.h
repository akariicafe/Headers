@class NSString, CNMetricsUIReporter, CNUIDataCollectorSGLogger;

@interface CNUIDataCollector : NSObject

@property (readonly, nonatomic) CNMetricsUIReporter *metricsReporter;
@property (readonly, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) CNUIDataCollectorSGLogger *sgLogger;

+ (BOOL)isEnabled;
+ (id)sharedCollector;

- (id)init;
- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (void)logPresentation;
- (void)logContactActionType:(id)a0 attributes:(id)a1;
- (void)logContactCreated:(id)a0 originalContact:(id)a1;
- (void)logContactShown:(id)a0;
- (void)logSearchResultSelected:(id)a0;
- (void)logSearchResultsFetchedSuggested:(BOOL)a0;
- (void)logSearchUsage;

@end
