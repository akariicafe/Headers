@class NSString;

@interface ICQInternetPrivacyBannerModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *networkName;
@property (nonatomic) unsigned long long status;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 status:(unsigned long long)a3 networkName:(id)a4;

@end
