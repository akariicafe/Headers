@class UIAlertController, UIWindow;

@interface ISUIKitDialogOperation : ISDialogOperation {
    UIAlertController *_alert;
    UIWindow *_window;
}

- (void)run;
- (void).cxx_destruct;
- (void)handleButtonSelected:(long long)a0 withResponseDictionary:(id)a1;
- (void)_showAlertWithCompletion:(id /* block */)a0;
- (void)_cleanupAlert;

@end
