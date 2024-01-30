@class NSArray, NSDictionary, FCHeldRecords;
@protocol FCContentContext;

@interface FCWidgetConfigDataOperation : FCOperation

@property (retain, nonatomic) NSArray *recordSources;
@property (retain, nonatomic) NSDictionary *recordSourcesByRecordType;
@property (retain, nonatomic) FCHeldRecords *cachedRecords;
@property (retain, nonatomic) NSDictionary *resultDefaultConfigurationDictionary;
@property (retain, nonatomic) NSDictionary *resultSingleTagConfigurationDictionary;
@property (retain, nonatomic) NSArray *resultArticleIDs;
@property (retain, nonatomic) NSArray *resultArticleListIDs;
@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType;
@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSDictionary *widgetConfiguration;
@property (copy, nonatomic) id /* block */ widgetConfigDataCompletionHandler;

- (void)prepareOperation;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)_finalizeResultFromCachedRecords;
- (void)operationWillFinishWithError:(id)a0;
- (id)_recordSourceForRecordType:(id)a0;
- (void)_collectRecordsFromWidgetConfigDictionary:(id)a0;

@end
