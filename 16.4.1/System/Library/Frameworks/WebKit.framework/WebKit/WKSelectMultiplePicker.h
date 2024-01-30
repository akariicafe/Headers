@class NSString, WKContentView;

@interface WKSelectMultiplePicker : NSObject <UIPopoverPresentationControllerDelegate, WKFormControl> {
    WKContentView *_view;
    struct RetainPtr<UINavigationController> { void *m_ptr; } _navigationController;
    struct RetainPtr<WKSelectPickerTableViewController> { void *m_ptr; } _tableViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (id).cxx_construct;
- (id)initWithView:(id)a0;
- (id)controlView;
- (void).cxx_destruct;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)_indexPathForRow:(long long)a0;
- (void)configurePresentation;
- (void)selectRow:(long long)a0 inComponent:(long long)a1 extendingSelection:(BOOL)a2;

@end
