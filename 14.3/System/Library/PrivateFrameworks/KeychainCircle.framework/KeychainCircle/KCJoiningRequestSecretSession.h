@class NSString, OTControl, NSData, KCSRPClientContext, NSMutableDictionary, KCAESGCMDuplexSession;
@protocol KCJoiningRequestSecretDelegate;

@interface KCJoiningRequestSecretSession : NSObject

@property (weak) id<KCJoiningRequestSecretDelegate> secretDelegate;
@property (readonly) KCSRPClientContext *context;
@property (readonly) unsigned long long dsid;
@property (readonly) int state;
@property (retain) NSString *piggy_uuid;
@property unsigned long long piggy_version;
@property unsigned long long epoch;
@property (retain) NSData *challenge;
@property (retain) NSData *salt;
@property (retain) NSString *sessionUUID;
@property (retain, nonatomic) OTControl *otControl;
@property (retain, nonatomic) NSMutableDictionary *defaults;
@property (readonly) KCAESGCMDuplexSession *session;

+ (id)sessionWithSecretDelegate:(id)a0 dsid:(unsigned long long)a1 error:(id *)a2;

- (id)stateString;
- (BOOL)isDone;
- (void).cxx_destruct;
- (id)description;
- (id)initialMessage:(id *)a0;
- (id)processMessage:(id)a0 error:(id *)a1;
- (void)setControlObject:(id)a0;
- (id)createUUID;
- (BOOL)setupSession:(id *)a0;
- (id)copyResponseForChallenge:(id)a0 salt:(id)a1 secret:(id)a2 error:(id *)a3;
- (id)copyResponseForSecret:(id)a0 error:(id *)a1;
- (id)handleChallengeData:(id)a0 secret:(id)a1 error:(id *)a2;
- (id)handleChallenge:(id)a0 secret:(id)a1 error:(id *)a2;
- (id)handleChallenge:(id)a0 error:(id *)a1;
- (id)handleVerification:(id)a0 error:(id *)a1;
- (id)initWithSecretDelegate:(id)a0 dsid:(unsigned long long)a1 error:(id *)a2;
- (id)initWithSecretDelegate:(id)a0 dsid:(unsigned long long)a1 rng:(struct ccrng_state { void /* function */ *x0; } *)a2 error:(id *)a3;

@end
