@class NSString;
@protocol SBDownloadingIconDataSource;

@interface SBDownloadingIcon : SBLeafIcon

@property (readonly, nonatomic) id<SBDownloadingIconDataSource> downloadingIconDataSource;
@property (nonatomic) BOOL uninstalledByUser;
@property (readonly, copy, nonatomic) NSString *realDisplayName;

+ (id)leafIdentifierForApplicationPlaceholderBundleID:(id)a0;
+ (id)applicationPlaceholderBundleIDForDownloadingIconLeafIdentifier:(id)a0;
+ (BOOL)isDownloadingIconLeafIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDownloadingIconDataSource:(id)a0;
- (id)initWithDownloadingIconDataSource:(id)a0;
- (void)reloadForStatusChange;
- (id)uninstallAlertBody;
- (void)cancelDownload;
- (id)descriptionForLocation:(id)a0;
- (BOOL)isDownloadingIcon;

@end
