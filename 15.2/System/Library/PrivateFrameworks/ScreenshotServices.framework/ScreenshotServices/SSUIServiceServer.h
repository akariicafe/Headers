@protocol SSUIServiceServerDelegate;

@interface SSUIServiceServer : FBSServiceFacility

@property (weak, nonatomic) id<SSUIServiceServerDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)noteDidReceiveMessage:(id)a0 withType:(long long)a1 fromClient:(id)a2;
- (BOOL)_handleHasAnySSUIServiceEntitlement:(id)a0;

@end
