@interface PXDocumentMenuSettings : PXSettings

@property (nonatomic) BOOL showAddToSharedAlbumAction;
@property (nonatomic) BOOL excludeActionsFromShareSheet;
@property (nonatomic) BOOL enableActionsMenuOnPad;
@property (nonatomic) BOOL enableActionsMenuOnPhone;
@property (nonatomic) long long actionsMenuLocation;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
