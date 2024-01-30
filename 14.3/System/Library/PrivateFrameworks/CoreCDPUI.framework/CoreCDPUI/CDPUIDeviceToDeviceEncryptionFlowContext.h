@class NSString, UIViewController;

@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeUIStyle;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeType;
@property (copy, nonatomic) NSString *securityUpgradeContext;
@property (copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) NSString *altDSID;

- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0;

@end
