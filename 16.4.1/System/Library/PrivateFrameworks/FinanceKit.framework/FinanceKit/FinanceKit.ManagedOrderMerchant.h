@class _TtC10FinanceKit15LocalizedString, NSString, NSURL, CNPostalAddress;

@interface FinanceKit.ManagedOrderMerchant : NSManagedObject

@property (nonatomic, retain) CNPostalAddress *address;
@property (nonatomic, copy) NSURL *businessChatURL;
@property (nonatomic, copy) NSURL *contactURL;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *displayName;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *logoName;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSURL *url;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
