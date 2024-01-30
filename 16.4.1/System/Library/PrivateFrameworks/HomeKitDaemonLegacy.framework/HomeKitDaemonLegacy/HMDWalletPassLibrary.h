@class PKPassLibrary, NSString, NSSet, NSObject;
@protocol OS_dispatch_queue, HMDWalletPassLibraryDelegate;

@interface HMDWalletPassLibrary : HMFObject <HMFLogging, HMDWalletPassLibrary>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) PKPassLibrary *passLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDWalletPassLibraryDelegate> delegate;
@property (readonly, copy) NSString *secureElementIdentifier;
@property (readonly, copy) NSSet *walletKeys;
@property (readonly, getter=isWalletVisible) BOOL walletVisible;

+ (id)logCategory;

- (void)deleteKeyMaterialForSubCredentialId:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)acquireAssertionOfType:(unsigned long long)a0 withReason:(id)a1 completion:(id /* block */)a2;
- (id)initWithWorkQueue:(id)a0;
- (id)createTemporaryPassDirectoryURL;
- (void)addPassAtURL:(id)a0 completion:(id /* block */)a1;
- (void)enableExpressWithAuthData:(id)a0 passTypeIdentifier:(id)a1 serialNumber:(id)a2 completion:(id /* block */)a3;
- (void)fetchExpressEnablementConflictingPassDescriptionForPassAtURL:(id)a0 completion:(id /* block */)a1;
- (void)fetchHomeKeySupportedWithCompletion:(id /* block */)a0;
- (void)fetchIsExpressEnabledForPassWithTypeIdentifier:(id)a0 serialNumber:(id)a1 completion:(id /* block */)a2;
- (void)fetchTransactionKeyForPassWithTypeIdentifier:(id)a0 serialNumber:(id)a1 completion:(id /* block */)a2;
- (void)generateHomeKeyNFCInfoWithReaderPublicKey:(id)a0 readerIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)handlePassLibraryCanAddPassChangeNotification;
- (void)handlePassLibraryDidChangeNotification:(id)a0;
- (id)passUniqueIDOfWalletKeyWithTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (BOOL)removePassWithTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (void)updatePassAtURL:(id)a0 completion:(id /* block */)a1;
- (id)urlForWalletKeyWithTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (id)walletKeyWithTypeIdentifier:(id)a0 serialNumber:(id)a1;

@end
