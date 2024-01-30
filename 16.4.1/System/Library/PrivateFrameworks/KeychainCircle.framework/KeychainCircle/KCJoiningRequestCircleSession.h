@class KCAESGCMDuplexSession, OTControl, OTControlArguments, NSObject, OTJoiningConfiguration;
@protocol KCJoiningRequestCircleDelegate;

@interface KCJoiningRequestCircleSession : NSObject

@property (readonly) NSObject<KCJoiningRequestCircleDelegate> *circleDelegate;
@property (readonly) KCAESGCMDuplexSession *session;
@property int state;
@property (nonatomic) unsigned long long piggy_version;
@property (retain, nonatomic) OTControl *otControl;
@property (retain, nonatomic) OTJoiningConfiguration *joiningConfiguration;
@property (retain, nonatomic) OTControlArguments *controlArguments;

+ (id)sessionWithCircleDelegate:(id)a0 session:(id)a1 error:(id *)a2;

- (BOOL)isDone;
- (void).cxx_destruct;
- (id)initialMessage:(id *)a0;
- (id)accessSession;
- (id)encryptedInitialMessage:(id)a0 error:(id *)a1;
- (id)encryptedPeerInfo:(id *)a0;
- (id)handleCircleBlob:(id)a0 error:(id *)a1;
- (id)initWithCircleDelegate:(id)a0 session:(id)a1 error:(id *)a2;
- (id)initWithCircleDelegate:(id)a0 session:(id)a1 otcontrol:(id)a2 error:(id *)a3;
- (id)processMessage:(id)a0 error:(id *)a1;
- (void)setContextIDForSession:(id)a0;
- (void)setControlObject:(id)a0;
- (BOOL)shouldJoinSOS:(id)a0 pairingMessage:(id)a1;
- (void)waitForOctagonUpgrade;

@end
