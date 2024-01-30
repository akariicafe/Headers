@class NSMutableArray, AVAudioSession;

@interface AXMAudioSession : NSObject

@property (retain, nonatomic) NSMutableArray *notificationObserverTokens;
@property (retain, nonatomic) AVAudioSession *session;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleMediaServicesLost;
- (void)_handleMediaServicesReset;
- (void)_handleRouteChanged:(unsigned long long)a0 previousRoute:(id)a1;
- (void)_handleSessionInterrupted:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)_handleSilenceSecondaryAudio:(unsigned long long)a0;
- (id)_stringForRouteChangeReason:(unsigned long long)a0;
- (BOOL)activateSessionWithError:(id *)a0;
- (BOOL)deactivateSessionWithError:(id *)a0;

@end
