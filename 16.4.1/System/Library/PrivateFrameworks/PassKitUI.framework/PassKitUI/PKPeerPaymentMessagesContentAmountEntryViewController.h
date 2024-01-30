@class PKPeerPaymentMessagesContentAmountEntryView, PKCurrencyAmount;
@protocol PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate;

@interface PKPeerPaymentMessagesContentAmountEntryViewController : PKPeerPaymentMessagesContentBaseViewController {
    BOOL _usesAccessibilityLayout;
}

@property (copy, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic) unsigned long long sourceType;
@property (readonly, nonatomic) PKPeerPaymentMessagesContentAmountEntryView *mainView;
@property (weak, nonatomic) id<PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)_currentBalance;
- (BOOL)_canShowKeypad;
- (id)_maximumTransferAmount;
- (id)_minimumTransferAmount;
- (void)_noteAmountChanged;
- (id)initWithMessagesAppController:(id)a0;
- (void)reloadContent;
- (void)sendAnalyticsForAction:(unsigned long long)a0;

@end
