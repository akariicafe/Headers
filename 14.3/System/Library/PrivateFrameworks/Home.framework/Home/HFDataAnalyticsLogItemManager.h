@class HFDataAnalyticsModule;
@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsLogItemManager : HFItemManager

@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly, nonatomic) HFDataAnalyticsModule *dataAnalyticsModule;

- (id)initWithMediaProfileContainer:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;

@end
