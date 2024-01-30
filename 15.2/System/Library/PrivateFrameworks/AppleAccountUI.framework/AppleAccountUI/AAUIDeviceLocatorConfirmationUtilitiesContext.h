@class NSString, NSDictionary, ACAccount, UIViewController;

@interface AAUIDeviceLocatorConfirmationUtilitiesContext : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) NSDictionary *customRequestHeaders;
@property (retain, nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;

@end
