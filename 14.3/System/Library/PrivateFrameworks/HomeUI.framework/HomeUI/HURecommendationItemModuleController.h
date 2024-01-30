@class NSString, HURecommendationItemModule;

@interface HURecommendationItemModuleController : HUItemTableModuleController <HUIconSwitchCellDelegate, HUTriggerEditorDelegate, HUPresentationDelegate>

@property (readonly, nonatomic) HURecommendationItemModule *module;
@property unsigned long long selectionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dismissViewController:(id)a0;
- (void)_presentViewController:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (unsigned long long)didSelectItem:(id)a0;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (id)commitSelectedItems;
- (void)_item:(id)a0 didTurnOn:(BOOL)a1;
- (void)_presentSummaryForBuilder:(id)a0 forRecommendation:(id)a1;
- (void)_presentActionSetSummaryWithBuilder:(id)a0 forRecommendation:(id)a1;
- (void)_presentTriggerSummaryWithBuilder:(id)a0 forRecommendation:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)triggerEditor:(id)a0 didFinishWithTriggerBuilder:(id)a1;
- (id)initWithModule:(id)a0 selectionType:(unsigned long long)a1;

@end
