@class _UIFontPickerRemoteViewController, NSString, _UIRemoteViewController, UIFontDescriptor, NSExtension, UIFontPickerViewControllerConfiguration;
@protocol UIFontPickerViewControllerDelegate, NSCopying;

@interface UIFontPickerViewController : UIViewController <_UIFontPickerRemoteViewControllerHost, _UIRemoteViewControllerContaining, UIFontPicker> {
    BOOL _presentingViewController;
    _UIFontPickerRemoteViewController *_childViewController;
}

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (readonly, copy, nonatomic) UIFontPickerViewControllerConfiguration *configuration;
@property (weak, nonatomic) id<UIFontPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) UIFontDescriptor *selectedFontDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)initWithMode:(unsigned long long)a0;
- (void)dealloc;
- (id)remoteViewController;
- (id)init;
- (void)invalidate;
- (void)dismissViewControllerWithTransition:(int)a0 completion:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_commonInitWithCompletion:(id /* block */)a0;
- (id)_initWithCompletion:(id /* block */)a0;
- (id)_initWithMode:(unsigned long long)a0 hideSearchBar:(BOOL)a1 tintColor:(id)a2;
- (void)_pickerDidCancel;
- (void)_pickerDidSelectFont:(id)a0;
- (void)_setChildViewController:(id)a0;
- (void)_viewControllerPresentationDidInitiate;
- (id)initWithSelectedFont:(id)a0 inMode:(unsigned long long)a1;

@end
