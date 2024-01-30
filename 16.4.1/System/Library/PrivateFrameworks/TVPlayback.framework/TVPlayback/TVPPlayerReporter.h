@class TVPPlayer, RTCReporting;

@interface TVPPlayerReporter : NSObject

@property (weak, nonatomic) TVPPlayer *player;
@property (retain) RTCReporting *rtcAgent;
@property (retain, nonatomic) id reportingHierarchyToken;

+ (void)initialize;

- (id)initWithPlayer:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_playerCurrentMediaItemWillChange:(id)a0;
- (void)_playerStateWillChange:(id)a0;
- (void)_playerCurrentMediaItemDidChange:(id)a0;
- (id)_rtcAgentUserInfo;
- (void)_sendPlaybackStartupEventsIfNecessary;
- (void)_sendRTCEvent:(id)a0 withCategory:(unsigned short)a1 type:(unsigned short)a2 values:(id)a3;
- (void)_setupRTCAgent;
- (void)_tearDownRTCAgent;
- (void)sendPlaybackStartupMetricsManually;

@end
