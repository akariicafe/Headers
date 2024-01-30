@class NSDecimalNumber, NSString, NSSet, NSArray;

@interface FinanceKit.ManagedOrderPayment : NSManagedObject

@property (nonatomic) short statusValue;
@property (nonatomic, retain) NSDecimalNumber *totalAmount;
@property (nonatomic, copy) NSString *totalCurrencyCode;
@property (nonatomic, copy) NSSet *summaryItemObjects;
@property (nonatomic, copy) NSArray *paymentMethods;
@property (nonatomic, copy) NSSet *applePayTransactionIdentifierObjects;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
