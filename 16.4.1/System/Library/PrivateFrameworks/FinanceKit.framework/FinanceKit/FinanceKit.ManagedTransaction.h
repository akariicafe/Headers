@class NSDecimalNumber, NSUUID, NSString, NSData, CLLocation, NSDate, _TtC10FinanceKit14ManagedAccount;

@interface FinanceKit.ManagedTransaction : NSManagedObject

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic) short creditDebitIndicatorValue;
@property (nonatomic, retain) NSDecimalNumber *foreignAmount;
@property (nonatomic, copy) NSString *foreignCurrency;
@property (nonatomic) short merchantCategoryCode;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSString *transactionDescription;
@property (nonatomic, copy) NSString *transactionIdentifier;
@property (nonatomic) short transactionStatusValue;
@property (nonatomic) short sourceValue;
@property (nonatomic, copy) NSDate *transactionDate;
@property (nonatomic) short categoryValue;
@property (nonatomic, retain) _TtC10FinanceKit14ManagedAccount *accountObject;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
