@protocol SSUIServiceServerDelegate;

@interface SSUIServiceServer : FBSServiceFacility

@property (weak, nonatomic) id<SSUIServiceServerDelegate> delegate;

- (void)noteDidReceiveMessage:(id)a0 withType:(long long)a1 fromClient:(id)a2;
- (BOOL)_handleHasAnySSUIServiceEntitlement:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
