@class NSString;

@interface SBHApplicationIcon : SBLeafIcon

@property (nonatomic, getter=isUninstalledByUser) BOOL uninstalledByUser;
@property (readonly, copy, nonatomic) NSString *applicationDisplayName;

- (void)possibleUserTapDidCancel;
- (BOOL)resumeDownload;
- (id)initWithApplicationWithBundleIdentifier:(id)a0;
- (void)removeApplicationPlaceholderDataSources;
- (void)addApplicationDataSource:(id)a0;
- (BOOL)isApplicationIcon;
- (id)initWithApplicationPlaceholder:(id)a0;
- (id)iconImageCacheIdentifier;
- (id)initWithApplication:(id)a0;
- (id)initWithLeafIdentifier:(id)a0 applicationPlaceholder:(id)a1;
- (void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)a0 andContinuousTime:(unsigned long long)a1;
- (void)removeApplicationDataSources;
- (BOOL)cancelDownload;
- (void)setBadge:(id)a0;
- (id)application;
- (void)replaceIconDataSourcesWithApplication:(id)a0;
- (id)copyWithLeafIdentifier:(id)a0;
- (id)initWithLeafIdentifier:(id)a0 application:(id)a1;
- (void)replaceIconDataSourcesWithApplicationPlaceholder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)automationID;
- (void)noteExternalApplicationPlaceholderStateChange;
- (BOOL)prioritizeDownload;
- (id)applicationPlaceholder;
- (BOOL)pauseDownload;

@end
