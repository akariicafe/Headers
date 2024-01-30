@class NSNumber, NSArray;

@interface IMSharedWithYouManager : NSObject

@property (nonatomic) int settingHasChangedNotificationToken;
@property (copy, nonatomic) NSNumber *cachedSharedWithYouEnabledValue;
@property (nonatomic, getter=isSharedWithYouEnabled) BOOL sharedWithYouEnabled;
@property (readonly, nonatomic) BOOL sharedWithYouKeyExists;
@property (readonly, copy, nonatomic) NSArray *sharedWithYouApplicationBundleIDs;

+ (id)sharedManager;
+ (id)defaultAppBundleIDs;
+ (BOOL)_isBundleIDAllowed:(id)a0;
+ (id)tvAppBundleID;
+ (id)sharedWithYouApps;

- (BOOL)__im_ff_isInterstellarEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)setSharedWithYouEnabled:(BOOL)a0 forApplicationWithBundleID:(id)a1;
- (void)dealloc;
- (BOOL)isSharedWithYouEnabledForApplicationWithBundleID:(id)a0;
- (void)setSharedWithYouEnabledForAllApplicationsIndividually:(BOOL)a0;

@end
