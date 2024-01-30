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

- (id)initWithView:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (id)controlView;
- (void)configurePresentation;
- (void)selectRow:(long long)a0 inComponent:(long long)a1 extendingSelection:(BOOL)a2;
- (id)_indexPathForRow:(long long)a0;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id).cxx_construct;

@end
