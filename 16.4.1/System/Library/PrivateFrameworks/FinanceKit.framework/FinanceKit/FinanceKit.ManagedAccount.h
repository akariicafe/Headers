@class NSUUID, NSSet, NSData, NSString;

@interface FinanceKit.ManagedAccount : NSManagedObject

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic, retain) NSSet *accountBalanceObjects;
@property (nonatomic, copy) NSString *accountDescription;
@property (nonatomic, copy) NSString *accountIdentificationDisplayIdentifier;
@property (nonatomic, copy) NSString *accountIdentificationIdentifier;
@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) short accountIdentifierSchemeValue;
@property (nonatomic) short accountStatusValue;
@property (nonatomic) short accountTypeValue;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) NSSet *transactionObjects;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
