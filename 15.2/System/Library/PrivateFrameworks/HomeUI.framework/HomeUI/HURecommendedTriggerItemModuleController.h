@class NSString;
@protocol HURecommendedTriggerItemModuleControllerDelegate;

@interface HURecommendedTriggerItemModuleController : HUItemTableModuleController

@property (weak, nonatomic) id<HURecommendedTriggerItemModuleControllerDelegate> delegate;
@property (retain, nonatomic) NSString *analyticsPresentationContext;

- (void).cxx_destruct;
- (unsigned long long)didSelectItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (void)didCommitTriggerBuilderForItem:(id)a0 withError:(id)a1;

@end
