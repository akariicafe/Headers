@protocol TSKUIAlertProtocol;

@interface TSKAbstractAlert : NSObject {
    long long _result;
    BOOL _isDelegateRetained;
    BOOL _clickedButtonAtIndex;
    BOOL _didDismissWithButtonIndex;
    BOOL _willDismissWithButtonIndex;
    BOOL _didPresentAlertView;
    BOOL _willPresentAlertView;
    id /* block */ _clickedBlock;
    id /* block */ _dismissedBlock;
}

@property (retain, nonatomic) id<TSKUIAlertProtocol> retainedDelegate;
@property (retain, nonatomic) id context;
@property (nonatomic) id<TSKUIAlertProtocol> delegate;
@property (nonatomic) long long cancelButtonIndex;
@property (nonatomic) BOOL cancelOnEnterBackground;
@property (readonly, nonatomic) BOOL inBackground;

- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (void)enterBackground;
- (long long)numberOfButtons;
- (long long)firstOtherButtonIndex;
- (id)init;
- (long long)addButtonWithTitle:(id)a0;
- (id)buttonTitleAtIndex:(long long)a0;
- (void)show;
- (long long)result;
- (void)dealloc;
- (void)showAlert;
- (void)didDismissWithButtonIndex:(long long)a0;
- (void)clickedButtonAtIndex:(long long)a0;
- (void)showWithDelegate:(id)a0 context:(id)a1;
- (void)showWithClickedButtonBlock:(id /* block */)a0;
- (void)showWithDismissedByButtonBlock:(id /* block */)a0;
- (long long)showSynchronously;
- (void)willDismissWithButtonIndex:(long long)a0;
- (void)_didPresentAlertView:(id)a0;
- (void)willPresentAlertView;

@end
