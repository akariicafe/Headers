@class UIAlertController, WebUIAlert, NSMutableArray;

@interface WBUSheetController : NSObject {
    UIAlertController *_alertController;
    WebUIAlert *_alert;
    NSMutableArray *_alertInvocationQueue;
    id _delegate;
}

+ (id)alertControllerForAlert:(id)a0 automaticallyDismiss:(BOOL)a1 withCompletionHandler:(id /* block */)a2;

- (id)initWithDelegate:(id)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_alertDidDismissWithAction:(int)a0;
- (void)showSheetForAlert:(id)a0;
- (void)showSheetForAlert:(id)a0 inView:(id)a1;
- (void)hideSheet;

@end
