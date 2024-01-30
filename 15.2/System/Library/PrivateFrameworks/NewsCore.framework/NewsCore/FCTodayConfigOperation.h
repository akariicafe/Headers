@class NSArray, NSDictionary, NSString, NSError, NTPBTodayConfig;
@protocol FCContentContext, FCCoreConfiguration;

@interface FCTodayConfigOperation : FCOperation

@property (copy, nonatomic) NTPBTodayConfig *resultDefaultConfig;
@property (copy, nonatomic) NSError *defaultConfigError;
@property (copy, nonatomic) NTPBTodayConfig *resultSingleTagConfig;
@property (copy, nonatomic) NSError *singleTagConfigError;
@property (copy, nonatomic) NSArray *networkEvents;
@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType;
@property (copy) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSString *widgetConfigID;
@property (copy, nonatomic) id /* block */ defaultConfigCompletionHandler;
@property (copy, nonatomic) id /* block */ singleTagConfigCompletionHandler;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)_todayConfigWithConfigJSON:(id)a0 articleListIDs:(id)a1 articleIDs:(id)a2 error:(id *)a3;
- (void)_collectRecordIDsReferencedBySectionConfig:(id)a0 withArticleListIDs:(id)a1 articleIDs:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
