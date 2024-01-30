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

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (unsigned long long)_paletteType;
- (void)cancelButtonTapped;
- (void)doneButtonTapped;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)didSelectColorAtIndexPath:(id)a0;
- (void)interactionCoordinator:(id)a0 colorPaletteDidChange:(id)a1;
- (void)interactionCoordinator:(id)a0 didSelectColorAtIndexPath:(id)a1;
- (void)interactionCoordinator:(id)a0 viewValueDidChange:(id)a1;
- (id)overrideStatusText;
- (void)presentFullColorViewForInteractionCoordinator:(id)a0 selectedColorIndexPath:(id)a1;
- (void)quickControlItemUpdater:(id)a0 didUpdateResultsForControlItems:(id)a1;
- (void)updateValueFromControlItem;

@end
