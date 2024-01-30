@interface PaperKit.ToolPickerController : NSObject <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textToolListViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shapeButtonListViewController;
}

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)toolPickerWillShowNotification:(id)a0;
- (void)toolPickerDidHideNotification:(id)a0;

@end
