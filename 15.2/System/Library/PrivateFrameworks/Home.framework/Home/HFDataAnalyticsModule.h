@class HFDataAnalyticsLogItemProvider;
@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsModule : HFItemModule

@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly, nonatomic) HFDataAnalyticsLogItemProvider *logItemProvider;

- (id)itemProviders;
- (void).cxx_destruct;
- (id)initWithItemUpdater:(id)a0 mediaProfileContainer:(id)a1;
- (id)buildSectionsWithDisplayedItems:(id)a0;

@end
