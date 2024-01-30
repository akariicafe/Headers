@class NSURL, MobileCalDAVAccount;

@interface MobileCalUserAddress : NSObject

@property (copy, nonatomic) NSURL *address;
@property (weak, nonatomic) MobileCalDAVAccount *account;

+ (id)userAddress:(id)a0 forAccount:(id)a1;
+ (id)userAddressFromDictionaryRepresentation:(id)a0 forAccount:(id)a1;

- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 account:(id)a1;

@end
