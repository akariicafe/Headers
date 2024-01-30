@class NSURL, MobileCalDAVAccount;

@interface MobileCalUserAddress : NSObject

@property (copy, nonatomic) NSURL *address;
@property (weak, nonatomic) MobileCalDAVAccount *account;

+ (id)userAddress:(id)a0 forAccount:(id)a1;
+ (id)userAddressFromDictionaryRepresentation:(id)a0 forAccount:(id)a1;

- (id)initWithAddress:(id)a0 account:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;

@end
