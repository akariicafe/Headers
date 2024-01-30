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
@property (retain, nonatomic) CKEntitlements *clientEntitlements;
@property (nonatomic) BOOL isClientMainBundleAppleExecutable;

- (BOOL)canOpenFileAtURL:(id)a0;
- (void)handleSignificantIssueBehavior:(unsigned long long)a0 reason:(id)a1;
- (BOOL)hasValidatedEntitlements;
- (void)tearDown;
- (BOOL)processIsAttached;
- (void)noteSystemIsAvailable;
- (void)_getProcessScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithClientConnection:(id)a0;
- (id)issueSandboxExtensionForItem:(id)a0 error:(id *)a1;
- (void)getProcessScopedClientProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 clientProxyHandler:(id /* block */)a2;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)getFileMetadataWithFileHandle:(id)a0 openInfo:(id)a1 error:(id *)a2;

@end
