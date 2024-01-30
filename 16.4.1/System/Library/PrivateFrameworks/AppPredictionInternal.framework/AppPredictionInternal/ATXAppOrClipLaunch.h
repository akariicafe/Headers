@class NSString;

@interface ATXAppOrClipLaunch : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *urlHash;
@property (readonly, nonatomic) BOOL isClip;
@property (readonly, nonatomic) int launchReason;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;

- (void).cxx_destruct;
- (id)initAppClipLaunchWithBundleId:(id)a0 urlHash:(id)a1 launchReason:(int)a2;
- (id)initAppClipLaunchWithBundleId:(id)a0 urlHash:(id)a1 launchReason:(int)a2 latitude:(double)a3 longitude:(double)a4;
- (id)initAppLaunchWithBundleId:(id)a0;
- (id)initAppLaunchWithBundleId:(id)a0 launchReason:(int)a1 latitude:(double)a2 longitude:(double)a3;

@end
