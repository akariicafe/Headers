@class _UIColorPickerViewControllerConfiguration, NSExtension, NSArray, NSString, _UIColorPickerRemoteViewController, _UIColorPickerColorQueue, NSLayoutConstraint, UIPresentationController, _UIRemoteViewController, UIColor;
@protocol UIColorPickerViewControllerDelegate, NSCopying;

@interface UIColorPickerViewController : UIViewController <_UIColorPickerRemoteViewControllerHost, _UIRemoteViewControllerContaining, _UIColorPickerColorQueueDelegate> {
    UIPresentationController *_presentationController;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    UIColor *__selectedColor;
    struct { unsigned char delegateImplementsDidSelectColorContinuous : 1; unsigned char delegateImplementsDidSelectColor : 1; unsigned char delegateImplementsDidDeselectColorSPI : 1; } _flags;
}

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (retain, nonatomic, setter=_setChildViewController:) _UIColorPickerRemoteViewController *_childViewController;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) _UIColorPickerColorQueue *colorQueue;
@property (readonly, copy, nonatomic) _UIColorPickerViewControllerConfiguration *configuration;
@property (copy, nonatomic, setter=_setRemoteConfiguration:) _UIColorPickerViewControllerConfiguration *_remoteConfiguration;
@property (nonatomic, setter=_setShouldUseDarkGridInDarkMode:) BOOL _shouldUseDarkGridInDarkMode;
@property (nonatomic, setter=_setUserInterfaceStyleForGrid:) long long _userInterfaceStyleForGrid;
@property (copy, nonatomic, setter=_setSuggestedColors:) NSArray *_suggestedColors;
@property (retain, nonatomic, setter=_setSelectedColor:) UIColor *_selectedColor;
@property (nonatomic, setter=_setAllowsNoColor:) BOOL _allowsNoColor;
@property (nonatomic, setter=_setSupportsEyedropper:) BOOL _supportsEyedropper;
@property (weak, nonatomic) id<UIColorPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) BOOL supportsAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

- (void)keyboardDidHide:(id)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_defaultColor;
- (void)keyboardWillShow:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (id)remoteViewController;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)__setSelectedColor:(id)a0 notifyingViewService:(BOOL)a1;
- (void)_colorPickerDidFinish;
- (void)_colorPickerViewServiceDidTerminateWithError:(id)a0;
- (void)_commonUIColorPickerViewControllerInit;
- (void)_dequeue_pickerDidSelectColor:(id)a0 colorspace:(id)a1 isVolatile:(BOOL)a2;
- (void)_notifyViewServiceOfColorSelection;
- (void)_pickerDidDismissEyedropper;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidSelectColor:(id)a0 colorspace:(id)a1 isVolatile:(BOOL)a2;
- (void)_pickerDidShowEyedropper;
- (void)_presentationController:(id)a0 prepareAdaptivePresentationController:(id)a1;
- (void)_processKeyboardNotification:(id)a0;
- (void)_selectDefaultColorIfNecessary;
- (void)_tryLaunchingExtension:(long long)a0;
- (void)_updateRemoteConfiguration;
- (void)keyboardFrameDidChange:(id)a0;
- (void)repositionChildViewControllerAnimated:(BOOL)a0;

@end
