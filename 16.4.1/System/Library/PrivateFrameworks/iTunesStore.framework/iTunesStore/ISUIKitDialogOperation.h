@class UIAlertController, UIWindow;

@interface ISUIKitDialogOperation : ISDialogOperation {
    UIAlertController *_alert;
    UIWindow *_window;
}

- (void)run;
- (void).cxx_destruct;
- (void)_cleanupAlert;
- (void)_showAlertWithCompletion:(id /* block */)a0;
- (void)handleButtonSelected:(long long)a0 withResponseDictionary:(id)a1;

@end
