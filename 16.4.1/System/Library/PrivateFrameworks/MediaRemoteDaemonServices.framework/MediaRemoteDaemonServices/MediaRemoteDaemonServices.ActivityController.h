@class NSDictionary, NSString;

@interface MediaRemoteDaemonServices.ActivityController : NSObject

@property (class, nonatomic, readonly) BOOL deviceSupportsActivities;

@property (nonatomic, readonly) NSDictionary *currentActivityInfo;
@property (nonatomic, readonly) NSString *nowPlayingActivityIdentifier;

- (id)init;
- (void)clearActivities;
- (id)contextForActivityIdentifier:(id)a0;
- (void)endMirroringActivity;
- (void)endNowPlayingActivity;
- (void)startMirroringActivity;
- (void)startNowPlayingActivity;

@end
