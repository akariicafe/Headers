@class _UIColorPickerViewControllerConfiguration, NSExtension, NSArray, NSString, _UIColorPickerRemoteViewController, _UIColorPickerColorQueue, NSLayoutConstraint, UIPresentationController, _UIRemoteViewController, UIColor;
@protocol UIColorPickerViewControllerDelegate, NSCopying;

@interface UIColorPickerViewController : UIViewController <_UIColorPickerRemoteViewControllerHost, _UIRemoteViewControllerContaining, _UIColorPickerColorQueueDelegate> {
    UIPresentationController *_presentationController;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    struct { unsigned char delegateImplementsDidSelectColorContinuous : 1; unsigned char delegateImplementsDidSelectColorContinuousSPI : 1; unsigned char delegateImplementsDidSelectColor : 1; } _flags;
}

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (retain, nonatomic, setter=_setChildViewController:) _UIColorPickerRemoteViewController *_childViewController;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) _UIColorPickerColorQueue *colorQueue;
@property (copy, nonatomic, setter=_setRemoteConfiguration:) _UIColorPickerViewControllerConfiguration *_remoteConfiguration;
@property (readonly, copy, nonatomic) _UIColorPickerViewControllerConfiguration *configuration;
@property (nonatomic, setter=_setShouldUseDarkGridInDarkMode:) BOOL _shouldUseDarkGridInDarkMode;
@property (nonatomic, setter=_setUserInterfaceStyleForGrid:) long long _userInterfaceStyleForGrid;
@property (copy, nonatomic, setter=_setSuggestedColors:) NSArray *_suggestedColors;
@property (weak, nonatomic) id<UIColorPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) BOOL supportsAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

+ (BOOL)automaticallyNotifiesObserversOfSelectedColor;

- (void)keyboardDidHide:(id)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)_presentationController:(id)a0 prepareAdaptivePresentationController:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)_dequeue_pickerDidSelectColor:(id)a0 colorspace:(id)a1 isVolatile:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_colorPickerviewServiceDidTerminateWithError:(id)a0;
- (void)_pickerDidSelectColor:(id)a0 colorspace:(id)a1 isVolatile:(BOOL)a2;
- (void)willMoveToParentViewController:(id)a0;
- (void)loadView;
- (id)initWithConfiguration:(id)a0;
- (void)_commonUIColorPickerViewControllerInit;
- (void)repositionChildViewControllerAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)keyboardWillHide:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)keyboardFrameDidChange:(id)a0;
- (void)setTitle:(id)a0;
- (void)dealloc;
- (void)_processKeyboardNotification:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (id)remoteViewController;
- (void)_updateRemoteConfiguration;
- (double)_detentHeightForWidth:(double)a0;
- (void)_pickerDidSelectColor:(id)a0;
- (void)_pickerDidShowEyedropper;
- (void)_pickerDidFloatEyedropper;
- (void)_colorPickerDidFinish;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_setSelectedColor:(id)a0;
- (void)_pickerDidDismissEyedropper;
- (void)_tryLaunchingExtension:(long long)a0;

@end
