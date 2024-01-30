@class NSString;

@interface SBHApplicationIcon : SBLeafIcon

@property (nonatomic, getter=isUninstalledByUser) BOOL uninstalledByUser;
@property (readonly, copy, nonatomic) NSString *applicationDisplayName;

- (id)application;
- (BOOL)cancelDownload;
- (void)replaceIconDataSourcesWithApplicationPlaceholder:(id)a0;
- (BOOL)pauseDownload;
- (id)initWithApplication:(id)a0;
- (BOOL)resumeDownload;
- (id)initWithApplicationPlaceholder:(id)a0;
- (void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)a0 andContinuousTime:(unsigned long long)a1;
- (id)copyWithLeafIdentifier:(id)a0;
- (BOOL)prioritizeDownload;
- (void)addApplicationDataSource:(id)a0;
- (id)iconImageCacheIdentifier;
- (void)removeApplicationPlaceholderDataSources;
- (void)replaceIconDataSourcesWithApplication:(id)a0;
- (id)initWithApplicationWithBundleIdentifier:(id)a0;
- (id)initWithLeafIdentifier:(id)a0 application:(id)a1;
- (id)automationID;
- (id)applicationPlaceholder;
- (BOOL)isApplicationIcon;
- (id)initWithLeafIdentifier:(id)a0 applicationPlaceholder:(id)a1;
- (void)possibleUserTapDidCancel;
- (void)removeApplicationDataSources;
- (void)noteExternalApplicationPlaceholderStateChange;
- (void)setBadge:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
