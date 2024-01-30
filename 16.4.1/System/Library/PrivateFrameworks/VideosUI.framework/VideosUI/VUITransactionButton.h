@class VUICircularProgress, NSString;

@interface VUITransactionButton : VUIButton

@property (nonatomic, getter=isWaitingForTransactionToStart) BOOL waitingForTransactionToStart;
@property (nonatomic) BOOL monitorTransaction;
@property (retain, nonatomic) VUICircularProgress *progressIndicator;
@property (copy, nonatomic) NSString *textContentTitleBackup;
@property (copy, nonatomic) NSString *transactionID;

- (void)dealloc;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (id)_carouselView;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_traitCollectionDidChange:(id)a0;
- (void)_addProgressIndicatorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_buttonTapped:(id)a0 eventName:(id)a1;
- (void)_handleTransactionDidFinishNotification:(id)a0;
- (void)_handleTransactionDidStartNotification:(id)a0;
- (void)_layoutProgressIndicatorIfNeeded;
- (void)_registerForTransactionNotification;
- (void)_startListeningForTransactionWithTransactionID:(id)a0;
- (void)_unregisterTransactionNotifications;
- (void)_updateProgressIndicatorTintColor:(id)a0;
- (id)initWithType:(unsigned long long)a0 interfaceStyle:(unsigned long long)a1;

@end
