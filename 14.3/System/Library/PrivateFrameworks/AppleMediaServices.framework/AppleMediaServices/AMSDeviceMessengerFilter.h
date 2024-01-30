@class ACAccount;

@interface AMSDeviceMessengerFilter : NSObject

@property (nonatomic) long long messageType;
@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) long long deviceType;

- (BOOL)matchesMessage:(id)a0;
- (void).cxx_destruct;

@end
