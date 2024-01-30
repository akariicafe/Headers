@class NSString, ACAccount, ACAccountStore;

@interface ICQOfferUpdateRequestContext : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (copy, nonatomic) NSString *buttonId;
@property (retain, nonatomic) NSString *offerId;
@property (nonatomic, getter=isZeroAction) BOOL zeroAction;

- (void).cxx_destruct;

@end
