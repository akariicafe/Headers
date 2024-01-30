@class NSString, NSMutableArray;
@protocol _DKKnowledgeSaving;

@interface CPAnalyticsKnowledgeStoreDestination : NSObject <CPAnalyticsDestination>

@property (class, readonly, nonatomic) BOOL disabled;

@property (readonly, nonatomic) NSMutableArray *matchers;
@property (readonly, nonatomic) id<_DKKnowledgeSaving> knowledgeStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)processEvent:(id)a0;
- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void).cxx_destruct;
- (void)_addCoreDuetDatasetSample:(id)a0 toDataset:(id)a1;
- (id)_datasetSampleFromEvent:(id)a0 andMatcher:(id)a1;

@end
