@class NSString, NSArray, NPKPaymentBarcode, PKPaymentTransaction, PKPass;

@interface NPKContactlessPaymentSessionManagerTransactionContext : NSObject

@property (retain, nonatomic) PKPass *transactionPass;
@property (retain, nonatomic) PKPass *valueAddedServicePass;
@property (retain, nonatomic) NSString *paymentMethodDescription;
@property (retain, nonatomic) PKPaymentTransaction *paymentTransaction;
@property (nonatomic) unsigned long long transactionStatus;
@property (nonatomic) unsigned long long transactionType;
@property (nonatomic) BOOL redeemedTicket;
@property (nonatomic) BOOL enRoute;
@property (retain, nonatomic) NSString *transactionDescription;
@property (retain, nonatomic) NSArray *displayablePassItems;
@property (retain, nonatomic) NPKPaymentBarcode *paymentBarcode;
@property (nonatomic) BOOL authenticationRequested;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)updateWithConcreteTransactions:(id)a0 ephemeralTransaction:(id)a1 updatedPassTransitItems:(id)a2 paymentApplication:(id)a3;
- (void)forceToTransitTypeTransactionWithTransactionStatus:(unsigned long long)a0;

@end
