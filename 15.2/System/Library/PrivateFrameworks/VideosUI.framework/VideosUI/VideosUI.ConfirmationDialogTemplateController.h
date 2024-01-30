@interface VideosUI.ConfirmationDialogTemplateController : VideosUI.VUIViewController {
    void /* unknown type, empty encoding */ isTimerSet;
    void /* unknown type, empty encoding */ dismissTimer;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backdropView;
}

- (void)dismissConfirmation;
- (void)onApplicationDidEnterBackground:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewWillDisappear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;

@end
