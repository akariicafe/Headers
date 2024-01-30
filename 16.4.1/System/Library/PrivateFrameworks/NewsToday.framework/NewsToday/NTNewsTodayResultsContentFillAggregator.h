@class NSString;
@protocol NTTodayResultsAggregator;

@interface NTNewsTodayResultsContentFillAggregator : NSObject <NTTodayResultsAggregator>

@property (nonatomic) double minHeadlineScale;
@property (nonatomic) double maxHeadlineScale;
@property (retain, nonatomic) id<NTTodayResultsAggregator> aggregator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aggregateSections:(id)a0 itemsBySectionDescriptor:(id)a1 budgetInfo:(id)a2;
- (id)initWithAggregator:(id)a0 minHeadlineScale:(double)a1 maxHeadlineScale:(double)a2;
- (id)_aggregateSections:(id)a0 itemsBySectionDescriptor:(id)a1 budgetInfo:(id)a2 scale:(double)a3;
- (id)_bestResultOfResults:(id)a0 withBudgetInfo:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
