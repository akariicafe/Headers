@class _UIAccessDeniedView;

@interface PLUIPrivacyViewController : UIViewController {
    BOOL _showingAccessDeniedView;
    _UIAccessDeniedView *_accessDeniedView;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (void)loadView;
- (void)_setImagePickerMediaTypes:(id)a0;
- (void)_showCancelButton;
- (void)_cancelButtonClicked:(id)a0;
- (void)_updateAccessDeniedView;

@end
