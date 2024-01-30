@class NSString, NSObject;
@protocol OS_tcc_identity;

@interface PALazyAuditTokenBasedClientIdentity : NSObject <PAIdentityWrapper>

@property (readonly, nonatomic) NSObject<OS_tcc_identity> *identity;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic, getter=isIdentityResolved) BOOL identityResolved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void).cxx_destruct;

@end
