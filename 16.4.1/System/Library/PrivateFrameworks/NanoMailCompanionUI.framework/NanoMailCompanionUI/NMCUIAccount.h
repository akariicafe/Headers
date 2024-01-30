@class NSString, ACAccount, NNMKAccount;

@interface NMCUIAccount : NSObject

@property (retain) ACAccount *acAccount;
@property (retain) NNMKAccount *nnmkAccount;
@property (readonly) NSString *username;
@property (readonly) NSString *displayName;
@property (readonly) NSString *identifier;
@property (readonly) NSString *accountTypeIdentifier;
@property (readonly) NSString *emailAddress;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL directPushNotificationsSupported;

- (void).cxx_destruct;
- (id)initWithACAccount:(id)a0;
- (BOOL)_isIcloud;
- (id)initWithNNMKAccount:(id)a0;
- (id)rootAccount:(id)a0;

@end
