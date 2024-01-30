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

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)_presentViewController:(id)a0;
- (void)_dismissContactPicker;
- (void)_finishContactPicker:(id)a0 withContact:(id)a1;
- (void)_finishWithTonePurchase:(id)a0;
- (void)_showContactPicker;
- (void)showPurchaseFlowWithCompletionBlock:(id /* block */)a0;

@end
