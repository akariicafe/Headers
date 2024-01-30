@class VUICircularProgress, NSString;

@interface VUITransactionButton : VUIButton

@property (nonatomic, getter=isWaitingForTransactionToStart) BOOL waitingForTransactionToStart;
@property (nonatomic) BOOL monitorTransaction;
@property (retain, nonatomic) VUICircularProgress *progressIndicator;
@property (copy, nonatomic) NSString *textContentTitleBackup;
@property (copy, nonatomic) NSString *transactionID;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_carouselView;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithType:(unsigned long long)a0 interfaceStyle:(long long)a1;
- (void)_buttonTapped:(id)a0 eventName:(id)a1;
- (void)_unregisterTransactionNotifications;
- (void)_layoutProgressIndicatorIfNeeded;
- (void)_startListeningForTransactionWithTransactionID:(id)a0;
- (void)_updateProgressIndicatorTintColor:(id)a0;
- (void)_addProgressIndicatorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_registerForTransactionNotification;
- (void)_handleTransactionDidStartNotification:(id)a0;
- (void)_handleTransactionDidFinishNotification:(id)a0;

@end
