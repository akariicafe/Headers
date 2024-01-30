@class NSString, NSDictionary, CKEntitlements, NSDate, CKDXPCConnection;
@protocol CKXPCProcessScopedClient;

@interface CKDProcessScopedClientProxy : NSObject

@property (retain) id<CKXPCProcessScopedClient> processScopedClientProxyCreator;
@property (weak, nonatomic) CKDXPCConnection *clientConnection;
@property (nonatomic, getter=isSandboxed) BOOL sandboxed;
@property (retain, nonatomic) NSDate *connectionDate;
@property (retain, nonatomic) NSDictionary *connectionEntitlements;
@property (nonatomic) long long hasValidatedEntitlementsTernary;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *processBinaryName;
@property (readonly, nonatomic) NSString *procName;
@property (nonatomic) unsigned int clientSDKVersion;
@property (readonly, nonatomic) CKEntitlements *clientEntitlements;
@property (nonatomic) BOOL isClientMainBundleAppleExecutable;

- (void)handleSignificantIssueBehavior:(unsigned long long)a0 reason:(id)a1;
- (BOOL)hasValidatedEntitlements;
- (BOOL)canOpenFileAtURL:(id)a0;
- (void)tearDown;
- (void)noteSystemIsAvailable;
- (id)getFileMetadataWithFileHandle:(id)a0 openInfo:(id)a1 error:(id *)a2;
- (id)CKPropertiesDescription;
- (void)getProcessScopedClientProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 clientProxyHandler:(id /* block */)a2;
- (id)description;
- (id)initWithClientConnection:(id)a0;
- (void).cxx_destruct;
- (BOOL)processIsAttached;
- (void)_getProcessScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)issueSandboxExtensionForItem:(id)a0 error:(id *)a1;

@end
