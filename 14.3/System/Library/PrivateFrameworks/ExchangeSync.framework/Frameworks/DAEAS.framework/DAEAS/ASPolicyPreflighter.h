@class ASPolicy, NSString, ASAccount, ASTaskManager;
@protocol ASPolicyPreflighterDelegate;

@interface ASPolicyPreflighter : NSObject

@property (weak, nonatomic) ASAccount *account;
@property (retain, nonatomic) ASPolicy *policy;
@property (retain, nonatomic) ASPolicy *acknowledgedPolicy;
@property (copy, nonatomic) NSString *originalKey;
@property (retain, nonatomic) ASTaskManager *taskManager;
@property (nonatomic) BOOL invalidated;
@property (weak, nonatomic) id<ASPolicyPreflighterDelegate> delegate;
@property (weak, nonatomic) id contextInfo;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithAccount:(id)a0 policyKey:(id)a1;
- (id)_originalKey;
- (void)provisionTask:(id)a0 failedWithError:(id)a1;
- (void)provisionTask:(id)a0 wipeRequested:(BOOL)a1 accountOnlyRipeRequested:(BOOL)a2 policies:(id)a3 status:(long long)a4;
- (void)startPreflight;
- (void)acknowledgePolicyCompliance;
- (void)acknowledgeIntentionToRemoteWipe;
- (void)acknowledgeAccountOnlyRemoteWipeWithSuccess:(BOOL)a0;
- (void)cancelPendingPreflightRequest;

@end
