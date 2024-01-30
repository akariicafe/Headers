@class CNContactPickerViewController, NSString, SKUIClientContext, SKUIItem, UIViewController;

@interface SKUITonePurchaseController : NSObject <CNContactPickerDelegate> {
    CNContactPickerViewController *_contactPickerController;
    id /* block */ _completionBlock;
    SKUIItem *_item;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (void)_presentViewController:(id)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)dealloc;
- (void)_dismissContactPicker;
- (void)showPurchaseFlowWithCompletionBlock:(id /* block */)a0;
- (void)_finishWithTonePurchase:(id)a0;
- (void)_showContactPicker;
- (void)_finishContactPicker:(id)a0 withContact:(id)a1;

@end
