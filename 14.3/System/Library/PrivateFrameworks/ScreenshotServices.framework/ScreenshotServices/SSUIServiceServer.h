@protocol SSUIServiceServerDelegate;

@interface SSUIServiceServer : FBSServiceFacility

@property (weak, nonatomic) id<SSUIServiceServerDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)_handleHasAnySSUIServiceEntitlement:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)noteDidReceiveMessage:(id)a0 withType:(long long)a1 fromClient:(id)a2;

@end
