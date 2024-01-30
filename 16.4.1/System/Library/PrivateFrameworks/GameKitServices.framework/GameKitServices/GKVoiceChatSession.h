@class NSString, NSArray;
@protocol GKVoiceChatSessionDelegate;

@interface GKVoiceChatSession : NSObject {
    id opaqueSession;
}

@property id<GKVoiceChatSessionDelegate> delegate;
@property (readonly) NSString *sessionName;
@property (readonly) NSArray *peerList;
@property (getter=isActiveSession) BOOL activeSession;
@property (readonly) float inputMeter;
@property float sessionVolume;

- (void)startSession;
- (void)dealloc;
- (void)stopSession;
- (id)initWithGKSession:(id)a0 sessionName:(id)a1;
- (void)setMute:(BOOL)a0 forPeer:(id)a1;
- (BOOL)getMuteStateForPeer:(id)a0;
- (float)outputMeterForPeer:(id)a0;

@end
