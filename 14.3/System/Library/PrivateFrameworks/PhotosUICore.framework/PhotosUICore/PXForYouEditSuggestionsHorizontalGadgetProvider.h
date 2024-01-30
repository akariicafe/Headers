@class NSDate;

@interface PXForYouEditSuggestionsHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable>

@property (retain, nonatomic) NSDate *cachedPriorityDate;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) long long defaultPriority;
@property (readonly, nonatomic) long long priorityType;
@property (readonly, nonatomic) unsigned long long gadgetType;

- (void).cxx_destruct;
- (BOOL)supportsDynamicRanking;
- (void)resetPriorityDate;
- (id)initWithContentGadgetProvider:(id)a0 title:(id)a1;

@end
