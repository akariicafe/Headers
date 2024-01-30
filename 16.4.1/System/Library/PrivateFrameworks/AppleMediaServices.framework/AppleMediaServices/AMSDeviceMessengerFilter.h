@class ACAccount;

@interface AMSDeviceMessengerFilter : NSObject

@property (nonatomic) long long messageType;
@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) long long deviceType;

- (void).cxx_destruct;
- (BOOL)matchesMessage:(id)a0;

@end
