@class _UIColorPickerViewControllerConfiguration, NSString, NSExtension, _UIColorPickerRemoteViewController, _UIColorPickerColorQueue, NSLayoutConstraint, UIPresentationController, _UIRemoteViewController, UIColor;
@protocol UIColorPickerViewControllerDelegate, NSCopying;

@interface UIColorPickerViewController : UIViewController <_UIColorPickerRemoteViewControllerHost, _UIRemoteViewControllerContaining, _UIGeometryChangeObserver, _UIColorPickerColorQueueDelegate> {
    UIPresentationController *_presentationController;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    struct { unsigned char keyboardVisible : 1; unsigned char geometryReaderAttached : 1; unsigned char respondingToGeometryChange : 1; unsigned char delegateImplementsDidSelectColorContinuous : 1; unsigned char delegateImplementsDidSelectColor : 1; } _flags;
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
@property (weak, nonatomic) id<UIColorPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) BOOL supportsAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

+ (BOOL)automaticallyNotifiesObserversOfSelectedColor;

- (void)willMoveToParentViewController:(id)a0;
- (void)_presentationController:(id)a0 prepareAdaptivePresentationController:(id)a1;
- (id)init;
- (id)remoteViewController;
- (void).cxx_destruct;
- (void)_dequeue_pickerDidSelectColor:(id)a0 colorspace:(id)a1 isVolatile:(BOOL)a2;
- (void)dealloc;
- (void)_pickerDidSelectColor:(id)a0 colorspace:(id)a1 isVolatile:(BOOL)a2;
- (void)loadView;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; id x4; id x5; id x6; id x7; } *)a0 forAncestor:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (BOOL)_geometryObserverNeedsAncestorOnly;
- (void)_commonUIColorPickerViewControllerInit;
- (void)updateGeometryObserver;
- (void)_processKeyboardNotification:(id)a0;
- (void)_pickerDidSelectColor:(id)a0;
- (void)_pickerDidShowEyedropper;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidDismissEyedropper;
- (void)setTitle:(id)a0;
- (void)_colorPickerDidFinish;
- (void)keyboardDidHide:(id)a0;
- (void)keyboardFrameDidChange:(id)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)invalidate;
- (void)_setSelectedColor:(id)a0;
- (void)_tryLaunchingExtension:(long long)a0;
- (void)_updateRemoteConfiguration;
- (void)repositionChildViewController;
- (void)encodeWithCoder:(id)a0;

@end
