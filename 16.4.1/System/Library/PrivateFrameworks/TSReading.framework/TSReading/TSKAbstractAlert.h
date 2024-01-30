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

- (long long)result;
- (void)show;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)enterBackground;
- (id)init;
- (void)applicationWillEnterForeground:(id)a0;
- (long long)numberOfButtons;
- (long long)addButtonWithTitle:(id)a0;
- (id)buttonTitleAtIndex:(long long)a0;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (long long)firstOtherButtonIndex;
- (void)showAlert;
- (void)showWithDismissedByButtonBlock:(id /* block */)a0;
- (void)_didPresentAlertView:(id)a0;
- (void)clickedButtonAtIndex:(long long)a0;
- (void)didDismissWithButtonIndex:(long long)a0;
- (long long)showSynchronously;
- (void)showWithClickedButtonBlock:(id /* block */)a0;
- (void)showWithDelegate:(id)a0 context:(id)a1;
- (void)willDismissWithButtonIndex:(long long)a0;
- (void)willPresentAlertView;

@end
