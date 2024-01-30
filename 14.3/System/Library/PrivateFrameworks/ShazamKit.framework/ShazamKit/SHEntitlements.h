@interface SHEntitlements : NSObject

@property (nonatomic) BOOL isEntitledForSignatureGeneration;
@property (nonatomic) BOOL isEntitledForStorefront;
@property (readonly, nonatomic) BOOL isEntitledForMicrophone;
@property (readonly, nonatomic) BOOL isEntitledForRemoteRecognition;
@property (readonly, nonatomic) BOOL isEntitledForExternalAudioRecording;
@property (readonly, nonatomic) BOOL isEntitledForInternalAudioRecording;
@property (readonly, nonatomic) BOOL isEntitledForControlCenterModuleAccess;

- (id)init;
- (id)initWithConnection:(id)a0;
- (void)configureEntitlementsForTask:(struct __SecTask { } *)a0;
- (void)configureEntitlementsForConnection:(id)a0;
- (BOOL)entitlementArray:(id)a0 containsEntitlementValue:(id)a1 fromSecTask:(struct __SecTask { } *)a2;
- (BOOL)boolValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (BOOL)entitlementArray:(id)a0 containsEntitlementValue:(id)a1 fromConnection:(id)a2;
- (BOOL)boolValueOfEntitlement:(id)a0 fromConnection:(id)a1;
- (void *)copyValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;

@end
