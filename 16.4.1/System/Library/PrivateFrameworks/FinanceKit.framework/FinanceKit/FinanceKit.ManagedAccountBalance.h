@class NSDecimalNumber, NSUUID, NSString, NSData, NSDate, _TtC10FinanceKit14ManagedAccount;

@interface FinanceKit.ManagedAccountBalance : NSManagedObject

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic, retain) NSDecimalNumber *amount;
@property (nonatomic, copy) NSDate *balanceDate;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic) short creditDebitIndicatorValue;
@property (nonatomic, retain) _TtC10FinanceKit14ManagedAccount *accountObject;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
