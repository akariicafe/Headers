@class DBApplicationLaunchInfo, DBAppHistory, NSString, DBApplicationInfo;
@protocol DBNowPlayingDelegate;

@interface DBNowPlayingObserver : NSObject <CPUINowPlayingObserving>

@property (retain, nonatomic) DBApplicationInfo *nowPlayingApplicationInfo;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, weak, nonatomic) DBAppHistory *appHistory;
@property (weak, nonatomic) id<DBNowPlayingDelegate> delegate;
@property (readonly, nonatomic) DBApplicationLaunchInfo *nowPlayingLaunchInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)nowPlayingManager:(id)a0 didThrottleUpdateForBundleIdentifier:(id)a1;
- (void)nowPlayingManager:(id)a0 didUpdateSnapshot:(id)a1;
- (id)nowPlayingLaunchInfoWithSource:(unsigned long long)a0;
- (BOOL)_isValidNowPlayingApplication:(id)a0;
- (void)_nowPlayingDidChangeToBundleIdentifier:(id)a0;
- (void)_updatePlaybackStateForBundleIdentifier:(id)a0 playing:(BOOL)a1;
- (id)initWithAppHistory:(id)a0;

@end
