@class NSString, HUQuickControlColorViewProfile, HFColorControlItem, NSIndexPath;

@interface HUQuickControlColorViewController : HUQuickControlSingleControlViewController <HUQuickControlColorInteractionCoordinatorDelegate>

@property (readonly, nonatomic) HFColorControlItem *controlItem;
@property (readonly, nonatomic) HUQuickControlColorViewProfile *viewProfile;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) NSIndexPath *selectedColorIndexPath;
@property (retain, nonatomic) HUQuickControlColorViewController *colorViewController;
@property (weak, nonatomic) HUQuickControlColorViewController *presentingColorViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)controlItemClass;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)cancelButtonTapped;
- (void)doneButtonTapped;
- (unsigned long long)_paletteType;
- (void)quickControlItemUpdater:(id)a0 didUpdateResultsForControlItems:(id)a1;
- (id)overrideStatusText;
- (void)updateValueFromControlItem;
- (void)didSelectColorAtIndexPath:(id)a0;
- (id)controlToViewValueTransformer;
- (void)interactionCoordinator:(id)a0 viewValueDidChange:(id)a1;
- (void)interactionCoordinator:(id)a0 colorPaletteDidChange:(id)a1;
- (void)presentFullColorViewForInteractionCoordinator:(id)a0 selectedColorIndexPath:(id)a1;
- (void)interactionCoordinator:(id)a0 didSelectColorAtIndexPath:(id)a1;
- (id)createInteractionCoordinator;
- (id)createViewProfile;

@end
