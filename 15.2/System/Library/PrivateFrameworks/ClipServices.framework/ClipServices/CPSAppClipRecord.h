@class NSString, NSNumber, NSURL;

@interface CPSAppClipRecord : NSObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSNumber *userNotificationGranted;
@property (copy, nonatomic) NSNumber *locationConfirmationGranted;
@property (nonatomic) long long locationConfirmationState;
@property (nonatomic) double lastProxCardLaunchTime;
@property (nonatomic) double lastVersionCheckTime;
@property (nonatomic) double lastInstallTime;
@property (copy, nonatomic) NSString *fullApplicationName;
@property (copy, nonatomic) NSString *fullApplicationCaption;
@property (retain, nonatomic) NSURL *fullApplicationStoreURL;
@property (retain, nonatomic, setter=debug_setFullApplicationIcon:) id debug_fullApplicationIcon;

- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (id)initWithSQLiteRow:(id)a0 bundleID:(id)a1;

@end
