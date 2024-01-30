@class UIAlertController;

@interface WBUFormAutoFillPrompt : NSObject {
    UIAlertController *_alertController;
}

+ (void)showAutoFillPromptInWebView:(id)a0 title:(id)a1 message:(id)a2 cancelButtonTitle:(id)a3 otherButtonTitles:(id)a4 cancelWhenAppEntersBackground:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (void)showAutoFillPromptInWebView:(id)a0 title:(id)a1 message:(id)a2 cancelButtonTitle:(id)a3 otherButtonTitles:(id)a4 completionHandler:(id /* block */)a5;

- (void).cxx_destruct;

@end
