@class HURecommendationListContentItemManager, HURecommendationItemModuleController, NSString;

@interface HURecommendationListContentViewController : HUItemTableViewController <HUPreloadableViewController, HUSelectableCellProtocol>

@property (retain, nonatomic) HURecommendationListContentItemManager *recommendationItemManager;
@property (retain, nonatomic) HURecommendationItemModuleController *recommendationItemModuleController;
@property (readonly, nonatomic) unsigned long long selectionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL canBeSelected;

- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (id)buildItemModuleControllerForModule:(id)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (id)initWithServiceLikeItems:(id)a0 selectionType:(unsigned long long)a1;
- (id)commitSelectedChanges;

@end
