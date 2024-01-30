@class NSString;

@interface NPKQuickPaymentSessionCleanupDelegate : NSObject <NPKQuickPaymentSessionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_saveTransactionFromContext:(id)a0;
- (void)paymentSession:(id)a0 didCompleteForReason:(unsigned long long)a1 withTransactionContext:(id)a2;
- (void)paymentSession:(id)a0 didCompleteTransactionWithContext:(id)a1;

@end
