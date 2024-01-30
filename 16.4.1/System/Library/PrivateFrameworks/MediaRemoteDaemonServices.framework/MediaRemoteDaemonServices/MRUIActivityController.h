@class _TtC25MediaRemoteDaemonServices18ActivityController, NSString;

@interface MRUIActivityController : NSObject

@property (class, readonly, nonatomic) BOOL deviceSupportsActivities;

@property (readonly, nonatomic) _TtC25MediaRemoteDaemonServices18ActivityController *activityController;
@property (readonly, nonatomic) NSString *nowPlayingActivityIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)clearActivities;
- (id)contextForActivityIdentifier:(id)a0;
- (id)currentActivityInfo;
- (void)endMirroringActivity;
- (void)endNowPlayingActivity;
- (void)startMirroringActivity;
- (void)startNowPlayingActivity;

@end
