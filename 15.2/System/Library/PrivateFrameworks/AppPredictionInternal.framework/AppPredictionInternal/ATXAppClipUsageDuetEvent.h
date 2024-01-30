@class NSString, NSDate;

@interface ATXAppClipUsageDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) NSDate *launchDate;
@property (readonly, nonatomic) double timeSinceDownload;
@property (readonly, nonatomic) NSString *urlHash;
@property (readonly, nonatomic) int launchReason;
@property (readonly, nonatomic) NSString *parentAppBundleId;
@property (readonly, nonatomic) NSString *clipBundleId;
@property (readonly, nonatomic) NSString *webClipBundleId;

- (id)identifier;
- (id)initWithDKEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCurrentContextStoreValues;
- (id)initWithContextValue:(id)a0;
- (id)initWithCurrentContextStoreValues:(id)a0;
- (id)loadStringFromMetadata:(id)a0 key:(id)a1;
- (int)launchReasonFromString:(id)a0;
- (id)initWithLaunchDate:(id)a0 timeSinceDownload:(double)a1 urlHash:(id)a2 clipBundleId:(id)a3 parentAppBundleId:(id)a4 webClipBundleId:(id)a5 launchReason:(int)a6;
- (id)initWithContext:(id)a0 modifiedDate:(id)a1;
- (id)loadNumberFromMetadata:(id)a0 key:(id)a1;

@end
