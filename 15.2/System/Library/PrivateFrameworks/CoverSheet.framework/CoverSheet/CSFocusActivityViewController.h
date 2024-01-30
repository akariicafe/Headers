@class NSString, NSArray, CSActivityPickerViewController, UIView;
@protocol FCActivityDescribing, CSFocusActivityViewControllerDelegate;

@interface CSFocusActivityViewController : CSCoverSheetViewControllerBase <CSFocusActivityViewDelegate, CSActivityPickerViewControllerDelegate, PTSettingsKeyObserver, CSAdjunctItemHosting> {
    struct CGSize { double width; double height; } _containerSize;
}

@property (retain, nonatomic) id<FCActivityDescribing> activity;
@property (weak, nonatomic) id<CSFocusActivityViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIView *activityIndicator;
@property (readonly, nonatomic) CSActivityPickerViewController *activityPickerViewController;
@property (readonly, nonatomic) BOOL isActivityIndicatorVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double containerCornerRadius;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

+ (Class)viewClass;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_updatePreferredContentSize;
- (BOOL)_canShowWhileLocked;
- (BOOL)usesBackgroundView;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (BOOL)handleEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateActivityViewBehavior;
- (void)_updateActivityViewActivity;
- (void)_updateActivityViewLegibility;
- (id)_activityViewIfLoaded;
- (void)focusActivityViewIndicatorDidChangeToVisible:(BOOL)a0;
- (void)_removeActivityViewIndicatorIfNecessary;
- (void)focusActivityViewIndicatorPressed:(id)a0;
- (id)activityPickerViewControllerPresentingView:(id)a0;
- (id)activityPickerViewControllerRepresentedActivityForPresentation:(id)a0;
- (id)activityPickerViewControllerRepresentedActivityForDismissal:(id)a0;

@end
