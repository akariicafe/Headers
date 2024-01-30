@class NSString, NSError, UIAlertView;

@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate> {
    id /* block */ _completionHandler;
    NSError *_error;
    UIAlertView *_alert;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_presentAlertWithError:(id)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)alertView:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)alertViewCancel:(id)a0;
- (void)_forceFinishNow;
- (id)initWithError:(id)a0 completionHandler:(id /* block */)a1;

@end
