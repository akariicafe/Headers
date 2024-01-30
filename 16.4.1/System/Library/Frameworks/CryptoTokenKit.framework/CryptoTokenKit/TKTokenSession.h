@class TKToken, NSString, LAContext, NSDictionary, NSXPCConnection, NSObject, NSNumber;
@protocol OS_dispatch_queue, TKTokenSessionDelegate, TKTokenSessionPrivateDelegate;

@interface TKTokenSession : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) id keepAlive;
@property (readonly, nonatomic) LAContext *LAContext;
@property (retain, nonatomic) NSDictionary *parameters;
@property (nonatomic) struct { unsigned int val[8]; } creatorAuditToken;
@property (readonly, nonatomic) NSXPCConnection *caller;
@property (retain, nonatomic) NSNumber *callerPID;
@property (readonly, nonatomic) id<TKTokenSessionPrivateDelegate> privateDelegate;
@property (readonly) TKToken *token;
@property (weak) id<TKTokenSessionDelegate> delegate;

+ (id)_localizedString:(id)a0 value:(id)a1;

- (void)terminate;
- (void)setCaller:(id)a0;
- (id)initWithToken:(id)a0;
- (void)setLAContext:(id)a0;
- (void).cxx_destruct;
- (void)endRequest;
- (void)attestKey:(id)a0 usingKey:(id)a1 nonce:(id)a2 reply:(id /* block */)a3;
- (void)auditAuthOperation:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 success:(BOOL)a2;
- (void)beginAuthForOperation:(long long)a0 constraint:(id)a1 reply:(id /* block */)a2;
- (void)beginRequest;
- (void)bumpKey:(id)a0 reply:(id /* block */)a1;
- (BOOL)checkOperation:(long long)a0 usingKey:(id)a1 algorithm:(id)a2 parameters:(id)a3;
- (void)commitKey:(id)a0 reply:(id /* block */)a1;
- (void)createObjectWithAttributes:(id)a0 reply:(id /* block */)a1;
- (void)decryptData:(id)a0 usingKey:(id)a1 algorithm:(id)a2 parameters:(id)a3 reply:(id /* block */)a4;
- (void)deleteObject:(id)a0 reply:(id /* block */)a1;
- (id)errorWithResult:(id)a0 operation:(id)a1 forError:(id)a2;
- (void)evaluateAccessControl:(id)a0 forOperation:(id)a1 reply:(id /* block */)a2;
- (void)evaluateAuthOperation:(id)a0 tokenOperation:(long long)a1 reply:(id /* block */)a2;
- (void)evaluateAuthOperation:(id)a0 tokenOperation:(long long)a1 retry:(BOOL)a2 reply:(id /* block */)a3;
- (void)finalizeAuthOperation:(id)a0 evaluatedAuthOperation:(id)a1 reply:(id /* block */)a2;
- (void)getAdvertisedItemsWithReply:(id /* block */)a0;
- (void)getAttributesOfObject:(id)a0 isCertificate:(BOOL)a1 reply:(id /* block */)a2;
- (void)objectID:(id)a0 operation:(long long)a1 inputData:(id)a2 algorithms:(id)a3 parameters:(id)a4 reply:(id /* block */)a5;
- (void)performKeyExchangeWithPublicKey:(id)a0 usingKey:(id)a1 algorithm:(id)a2 parameters:(id)a3 reply:(id /* block */)a4;
- (void)signData:(id)a0 usingKey:(id)a1 algorithm:(id)a2 reply:(id /* block */)a3;

@end
