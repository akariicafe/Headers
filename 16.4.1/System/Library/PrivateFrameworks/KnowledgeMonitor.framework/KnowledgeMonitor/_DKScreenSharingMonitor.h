@class AVOutputContext, BMScreenSharingStream;

@interface _DKScreenSharingMonitor : _DKMonitor

@property (retain, nonatomic) AVOutputContext *outputContext;
@property (retain, nonatomic) BMScreenSharingStream *screenSharingStream;
@property (nonatomic) long long currentMirroringDeviceCount;

+ (id)eventStream;
+ (id)entitlements;

- (void)deactivate;
- (void)mirroringDidChange:(id)a0;
- (void)stop;
- (id)init;
- (void)registerForScreenMirroringNotifications;
- (void)start;
- (void).cxx_destruct;

@end
