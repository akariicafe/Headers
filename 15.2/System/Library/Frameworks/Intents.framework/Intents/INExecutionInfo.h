@class LSApplicationRecord, INAppInfo, NSString, NSURL;

@interface INExecutionInfo : NSObject <NSCopying>

@property (readonly, nonatomic) LSApplicationRecord *_applicationRecord;
@property (readonly, nonatomic) INAppInfo *_appInfo;
@property (readonly, copy, nonatomic) NSString *launchableAppBundleId;
@property (readonly, copy, nonatomic) NSString *displayableAppBundleId;
@property (readonly, copy, nonatomic) NSString *extensionBundleId;
@property (readonly, copy, nonatomic) NSURL *containingAppBundleURL;
@property (readonly, nonatomic) BOOL canRunOnLocalDevice;

+ (void)initialize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithLaunchableAppBundleId:(id)a0 displayableAppBundleId:(id)a1 containingAppBundleURL:(id)a2 extensionBundleId:(id)a3;

@end
