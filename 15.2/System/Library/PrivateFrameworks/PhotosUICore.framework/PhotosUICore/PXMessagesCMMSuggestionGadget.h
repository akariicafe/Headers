@class NSString, PXUpdater, PXCMMPosterHeaderView, PXGadgetSpec, PXRoundedCornerOverlayView;
@protocol PXGadgetDelegate, PXCMMSuggestion, PXMessagesCMMSuggestionGadgetActionDelegate;

@interface PXMessagesCMMSuggestionGadget : UIViewController <PXGadget> {
    PXUpdater *_updater;
    PXCMMPosterHeaderView *_posterHeaderView;
    PXRoundedCornerOverlayView *_roundedOverlayView;
}

@property (retain, nonatomic) id<PXCMMSuggestion> suggestion;
@property (weak, nonatomic) id<PXMessagesCMMSuggestionGadgetActionDelegate> actionDelegate;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)userDidSelectGadget;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)contentViewController;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestion:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_scheduleLayout;
- (void)_updatePosterHeaderView;

@end
