@class TVPPlayer, RTCReporting;

@interface TVPPlayerReporter : NSObject

@property (weak, nonatomic) TVPPlayer *player;
@property (retain) RTCReporting *rtcAgent;
@property (retain, nonatomic) id reportingHierarchyToken;

+ (void)initialize;

- (id)initWithPlayer:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_playerStateWillChange:(id)a0;
- (void)_playerCurrentMediaItemWillChange:(id)a0;
- (void)_playerCurrentMediaItemDidChange:(id)a0;
- (void)_setupRTCAgent;
- (void)_sendPlaybackStartupEventsIfNecessary;
- (void)_tearDownRTCAgent;
- (id)_rtcAgentUserInfo;
- (void)_sendRTCEvent:(id)a0 withCategory:(unsigned short)a1 type:(unsigned short)a2 values:(id)a3;
- (void)sendPlaybackStartupMetricsManually;

@end
