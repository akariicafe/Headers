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

- (void)viewWillAppear:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithCompletion:(id /* block */)a0;
- (id)initWithSelectedFont:(id)a0 inMode:(unsigned long long)a1;
- (id)_initWithMode:(unsigned long long)a0 hideSearchBar:(BOOL)a1 tintColor:(id)a2;
- (id)initWithMode:(unsigned long long)a0;
- (void)_pickerDidCancel;
- (void)_pickerDidSelectFont:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_commonInitWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)remoteViewController;
- (void)_viewControllerPresentationDidInitiate;
- (void)dismissViewControllerWithTransition:(int)a0 completion:(id /* block */)a1;
- (void)_setChildViewController:(id)a0;

@end
