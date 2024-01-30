@class NSString;

@interface FinanceKit.ManagedOrderApplePayTransactionIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *value;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
