@class NSMutableDictionary, KCAESGCMDuplexSession, NSString, NSData, OTControl, OTJoiningConfiguration, KCSRPServerContext;
@protocol KCJoiningAcceptCircleDelegate, KCJoiningAcceptSecretDelegate;

@interface KCJoiningAcceptSession : NSObject

@property (readonly) unsigned long long dsid;
@property (weak) id<KCJoiningAcceptSecretDelegate> secretDelegate;
@property (weak) id<KCJoiningAcceptCircleDelegate> circleDelegate;
@property (readonly) KCSRPServerContext *context;
@property (readonly) KCAESGCMDuplexSession *session;
@property (readonly) int state;
@property (retain) NSData *startMessage;
@property (retain) NSString *piggy_uuid;
@property int piggy_version;
@property (retain) NSData *octagon;
@property (retain, nonatomic) OTJoiningConfiguration *joiningConfiguration;
@property (retain, nonatomic) OTControl *otControl;
@property (retain, nonatomic) NSMutableDictionary *defaults;

+ (id)sessionWithInitialMessage:(id)a0 secretDelegate:(id)a1 circleDelegate:(id)a2 dsid:(unsigned long long)a3 error:(id *)a4;

- (id)stateString;
- (BOOL)isDone;
- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)processMessage:(id)a0 error:(id *)a1;
- (void)setControlObject:(id)a0;
- (BOOL)setupSession:(id *)a0;
- (id)accessSession;
- (id)initWithSecretDelegate:(id)a0 circleDelegate:(id)a1 dsid:(unsigned long long)a2 rng:(struct ccrng_state { void /* function */ *x0; } *)a3 error:(id *)a4;
- (id)copyChallengeMessage:(id *)a0;
- (BOOL)shouldAcceptOctagonRequests;
- (id)processInitialMessage:(id)a0 error:(id *)a1;
- (id)processResponse:(id)a0 error:(id *)a1;
- (id)processSOSApplication:(id)a0 error:(id *)a1;
- (id)createPairingMessageFromJoiningMessage:(id)a0 error:(id *)a1;
- (id)createTLKRequestResponse:(id *)a0;
- (BOOL)shouldProcessSOSApplication:(id)a0 pairingMessage:(id)a1;
- (id)processApplication:(id)a0 error:(id *)a1;

@end
