@class NSString, UIAlertView;

@interface TPAlertViewHelper : NSObject <UIAlertViewDelegate> {
    id /* block */ _completionHandler;
    UIAlertView *_alertView;
}

@property (readonly) long long firstOtherButtonIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_workQueue;
+ (id)_allHelpersArray;
+ (id)alertHelperWithHandler:(id /* block */)a0 style:(long long)a1 title:(id)a2 message:(id)a3 cancelButtonTitle:(id)a4 otherButtonTitles:(id)a5;

- (void)show;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCompletionHandler:(id /* block */)a0;
- (void)alertView:(id)a0 clickedButtonAtIndex:(long long)a1;
- (id)_initWithTitle:(id)a0 style:(long long)a1 message:(id)a2 cancelButtonTitle:(id)a3 otherButtonTitles:(id)a4;
- (void)dismissWithClickedButtonIndexAnimated:(long long)a0;
- (void)dismissWithCancelAnimated:(BOOL)a0;
- (id)_underlyingAlertView;

@end
