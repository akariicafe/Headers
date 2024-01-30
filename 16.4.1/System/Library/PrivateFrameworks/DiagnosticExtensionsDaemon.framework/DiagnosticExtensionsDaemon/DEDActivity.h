@class NSObject;
@protocol OS_os_activity;

@interface DEDActivity : NSObject

@property (retain) NSObject<OS_os_activity> *cleanup;

+ (id)sharedInstance;

- (id)currentCleanupActivity;
- (id)newCleanupActivity;
- (void).cxx_destruct;

@end
