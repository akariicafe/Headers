@class NSSet, ACAccount, NAFuture;

@interface HFAppleMusicAccountArbitrator : NSObject

@property (retain, nonatomic) NAFuture *activeArbitrationFuture;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, copy, nonatomic) NSSet *accessories;
@property (readonly, copy, nonatomic) id /* block */ contextGenerator;
@property (nonatomic) long long loginType;
@property (nonatomic) BOOL forceLogout;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccessories:(id)a0 account:(id)a1 contextGenerator:(id /* block */)a2;
- (id)pendingArbitrationExecutionFuture;
- (long long)_resolvedLoginType:(id *)a0;

@end
