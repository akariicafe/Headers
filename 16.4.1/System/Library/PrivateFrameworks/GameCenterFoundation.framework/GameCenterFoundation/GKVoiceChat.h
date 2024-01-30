@class NSArray, NSString, GKSession, GKVoiceChatSession;

@interface GKVoiceChat : NSObject <GKVoiceChatSessionDelegate>

@property (retain, nonatomic) GKSession *gkSession;
@property (retain, nonatomic) GKVoiceChatSession *gkVoiceChatSession;
@property (copy, nonatomic) id /* block */ playerStateUpdateHandler;
@property (retain, nonatomic) NSArray *players;
@property (copy, nonatomic) id /* block */ playerVoiceChatStateDidChangeHandler;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) float volume;

+ (BOOL)isVoIPAllowed;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)gkVoiceChatSession:(id)a0 stateUpdate:(unsigned long long)a1 forPeer:(id)a2;
- (id)initChat:(id)a0 withSession:(id)a1 players:(id)a2;
- (id)playerIDs;
- (void)setMute:(BOOL)a0 forPlayer:(id)a1;
- (void)setPlayer:(id)a0 muted:(BOOL)a1;

@end
