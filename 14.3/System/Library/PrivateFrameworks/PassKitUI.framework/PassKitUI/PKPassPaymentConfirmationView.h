@class NSDate, NSString, PKPassPaymentPayStateView, UIView, NSMutableDictionary, PKTransitBalanceModel, PKExpressTransactionState, NSObject, PKPaymentService;
@protocol OS_dispatch_source, PKPaymentDashboardCellActionHandleable;

@interface PKPassPaymentConfirmationView : PKPassFooterContentView <PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate> {
    PKPassPaymentPayStateView *_payStateView;
    BOOL _animated;
    PKExpressTransactionState *_expressState;
    BOOL _receivedTransaction;
    BOOL _receivedExit;
    BOOL _needsResolution;
    BOOL _showingResolution;
    BOOL _showingSuccessResolution;
    BOOL _animatingResolution;
    BOOL _showingAlert;
    NSObject<OS_dispatch_source> *_activityResolutionTimer;
    unsigned long long _resolutionCounter;
    NSDate *_visibleDate;
    NSMutableDictionary *_registeredExpressObservers;
    PKPaymentService *_paymentService;
    PKTransitBalanceModel *_transitBalanceModel;
    UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellPrimary;
    UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellSecondary;
    UIView<PKPaymentDashboardCellActionHandleable> *_dualValueCellPrimary;
    UIView<PKPaymentDashboardCellActionHandleable> *_displayedCellPrimary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willBecomeVisibleAnimated:(BOOL)a0;
- (void)willBecomeHiddenAnimated:(BOOL)a0;
- (void)didBecomeVisibleAnimated:(BOOL)a0;
- (void)didBecomeHiddenAnimated:(BOOL)a0;
- (void)_handleExpressNotification:(id)a0;
- (id)_expressNotificationNames;
- (void)_registerObserverForNotificationName:(id)a0 center:(id)a1 handler:(id /* block */)a2;
- (void)layoutIfNeededAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)transactionSourceIdentifier:(id)a0 didReceiveTransaction:(id)a1;
- (void)dealloc;
- (void)_updateContentPrimaryView;
- (void)_beginResolution;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (BOOL)_isRegisteredForAllExpressTransactionNotifications;
- (void)_updateContentSecondaryView;
- (id)_findOrCreatePrimaryAdjustableSingleCellView;
- (id)_findOrCreatePrimaryFusedDoubleCellView;
- (id)_findOrCreateSecondaryView;
- (void)_disableActivityTimer;
- (BOOL)_shouldDisplayPrimaryView;
- (BOOL)_shouldDisplaySecondaryView;
- (void)_presentCheckmarkIfNecessary;
- (BOOL)_isExpressOutstanding;
- (void)_resolveActivityIfNecessary;
- (void)_resolveActivityIfNecessaryWithDelay;
- (BOOL)_isRegisteredForAnyExpressTransactionNotifications;
- (id)initWithPass:(id)a0 context:(id)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateWithTransitPassProperties:(id)a1;
- (void)layoutSubviews;
- (void)_registerForExpressTransactionNotifications:(BOOL)a0;
- (void)payStateView:(id)a0 revealingCheckmark:(BOOL)a1;

@end
