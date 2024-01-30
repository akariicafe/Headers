@class NSString, NSDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface KTAccountKeyServer : NSObject

@property struct _PCSIdentityData { } *_pcsIdentity;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } identityCacheLock;
@property int *notifyToken;
@property BOOL outstandingCreationSignal;
@property (retain) NSObject<OS_dispatch_queue> *creationQueue;
@property (retain) NSObject<OS_dispatch_group> *creationGroup;
@property (readonly) NSString *applicationIdentifier;
@property (retain) NSDate *_pcsIdentityCachedTime;
@property (readonly) NSDictionary *pcsOptions;

+ (id)publicKeyInfoFromIdentity:(struct _PCSIdentityData { } *)a0 error:(id *)a1;
+ (struct _PCSPublicIdentityData { } *)decodePublicKeyInfo:(id)a0 error:(id *)a1;
+ (BOOL)verifyData:(id)a0 signature:(id)a1 accountPublicKeyInfo:(id)a2 error:(id *)a3;

- (id)initWithApplication:(id)a0;
- (struct __CFString { } *)service;
- (void).cxx_destruct;
- (void)signData:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;
- (void)rollKey:(id /* block */)a0;
- (void)clearCachedPCSIdentity;
- (void)getPCSIdentity:(id /* block */)a0;
- (void)cachePCSIdentity:(struct _PCSIdentityData { } *)a0;
- (struct _PCSIdentityData { } *)copyCachedPCSIdentity;
- (struct _PCSIdentitySetData { } *)copyPCSIdentitySet:(id *)a0;
- (void)createIdentityForSet:(struct _PCSIdentitySetData { } *)a0 roll:(BOOL)a1 completionBlock:(id /* block */)a2;
- (BOOL)isAccountIdentity:(id)a0 error:(id *)a1;

@end
