@class NSString, BKSApplicationStateMonitor, UIImage, NSURL;

@interface InterAppAudioApp : NSObject {
    BKSApplicationStateMonitor *appMonitor;
}

@property (readonly, nonatomic) long long key;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isHost;
@property (readonly, nonatomic) BOOL isCurrentApp;
@property (readonly, nonatomic) BOOL isForeground;

- (void)dealloc;
- (id)description;
- (id)init:(const struct InterAppAudioAppInfo { BOOL x0; int x1; struct ObjCImage *x2; struct __CFString *x3; struct __CFString *x4; struct __CFURL *x5; } *)a0 iconSize:(float)a1;
- (BOOL)processRunningOnForeground:(int)a0;

@end
