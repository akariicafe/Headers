@class NSString, HUQuickControlColorView, HFColorPalette;
@protocol HUQuickControlColorInteractionCoordinatorDelegate;

@interface HUQuickControlColorInteractionCoordinator : HUQuickControlSimpleInteractionCoordinator <HUQuickControlColorViewInteractionDelegate>

@property (retain, nonatomic) HFColorPalette *colorPalette;
@property (nonatomic) BOOL hasPendingColorPaletteChangeDelegateNotification;
@property (weak, nonatomic) id<HUQuickControlColorInteractionCoordinatorDelegate> delegate;
@property (readonly, nonatomic) HUQuickControlColorView *controlView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_notifyDelegateOfColorPaletteChangeIfNecessary;
- (void)cancelButtonTappedToDismissColorViewController;
- (void)controlView:(id)a0 colorPaletteDidChange:(id)a1;
- (void)controlView:(id)a0 didSelectColorAtIndexPath:(id)a1;
- (void)controlView:(id)a0 interactionStateDidChange:(BOOL)a1 forFirstTouch:(BOOL)a2;
- (void)controlView:(id)a0 showAuxiliaryView:(id)a1;
- (void)hideAuxiliaryViewForControlView:(id)a0;
- (id)initWithControlView:(id)a0 colorPalette:(id)a1 delegate:(id)a2;
- (void)presentFullColorViewForControlView:(id)a0 selectedColorIndexPath:(id)a1;

@end
