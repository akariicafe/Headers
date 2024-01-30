@class KCAESGCMDuplexSession, OTControl, NSObject, OTJoiningConfiguration;
@protocol KCJoiningRequestCircleDelegate;

@interface KCJoiningRequestCircleSession : NSObject

@property (readonly) NSObject<KCJoiningRequestCircleDelegate> *circleDelegate;
@property (readonly) KCAESGCMDuplexSession *session;
@property int state;
@property (nonatomic) unsigned long long piggy_version;
@property (retain, nonatomic) OTControl *otControl;
@property (retain, nonatomic) OTJoiningConfiguration *joiningConfiguration;

+ (id)sessionWithCircleDelegate:(id)a0 session:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (BOOL)isDone;
- (id)initialMessage:(id *)a0;
- (id)processMessage:(id)a0 error:(id *)a1;
- (void)waitForOctagonUpgrade;
- (void)setControlObject:(id)a0;
- (void)setContextIDOnJoiningConfiguration:(id)a0;
- (id)accessSession;
- (id)encryptedPeerInfo:(id *)a0;
- (id)encryptedInitialMessage:(id)a0 error:(id *)a1;
- (BOOL)shouldJoinSOS:(id)a0 pairingMessage:(id)a1;
- (id)handleCircleBlob:(id)a0 error:(id *)a1;
- (id)initWithCircleDelegate:(id)a0 session:(id)a1 error:(id *)a2;
- (id)initWithCircleDelegate:(id)a0 session:(id)a1 otcontrol:(id)a2 error:(id *)a3;

@end
