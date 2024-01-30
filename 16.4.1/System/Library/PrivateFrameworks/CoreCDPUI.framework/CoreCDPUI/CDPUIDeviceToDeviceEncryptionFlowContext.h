@class NSString, CDPContext, CDPLocalSecret, UIViewController;

@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject

@property (copy, nonatomic) NSString *altDSID;
@property (retain, nonatomic) CDPContext *repairContext;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeUIStyle;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeType;
@property (copy, nonatomic) NSString *securityUpgradeContext;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) CDPLocalSecret *cachedLocalSecret;
@property (nonatomic) BOOL forceInlinePresentation;
@property (nonatomic) BOOL requiresSynchronousRepair;
@property (nonatomic) BOOL shouldSuppressPasscodeCreationCancelPrompt;
@property (nonatomic) BOOL isDemoDevice;

- (id)initWithAltDSID:(id)a0;
- (void).cxx_destruct;

@end
