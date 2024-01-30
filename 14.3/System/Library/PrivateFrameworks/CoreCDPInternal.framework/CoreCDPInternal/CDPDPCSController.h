@class CDPContext;
@protocol CDPProtectedCloudStorageProxy;

@interface CDPDPCSController : NSObject

@property (retain, nonatomic) id<CDPProtectedCloudStorageProxy> pcsProxy;
@property (retain, nonatomic) CDPContext *context;

- (id)init;
- (void).cxx_destruct;
- (id)_contextSetupDictionary;
- (void)checkiCDPStatusNetwork:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_reauthenticateAndCheckiCDPStatusWithNetwork:(BOOL)a0 completion:(id /* block */)a1;
- (void)_checkiCDPStatusNetwork:(BOOL)a0 withCompletion:(id /* block */)a1;
- (struct _PCSIdentitySetData { } *)_getOrSetupIdentitySetRef:(id *)a0;
- (void)_enableCDPWithCompletion:(id /* block */)a0;
- (void)_disableCDPWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 pcsProxy:(id)a1;
- (void)recoverKeysWithCompletion:(id /* block */)a0;
- (void)recoverAndSynchronizeKeysWithCompletion:(id /* block */)a0;
- (BOOL)isCloudProtectionEnabledLocally:(id *)a0;
- (BOOL)isCompanionInKeychainCircle:(id *)a0;
- (void)enableCDPWithCompletion:(id /* block */)a0;
- (void)disableCDPWithCompletion:(id /* block */)a0;

@end
