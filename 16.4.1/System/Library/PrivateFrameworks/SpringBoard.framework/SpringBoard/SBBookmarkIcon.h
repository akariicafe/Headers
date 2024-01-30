@interface SBBookmarkIcon : SBHBookmarkIcon

@property (readonly, nonatomic) BOOL displaysShareBookmarkShortcutItem;
@property (readonly, nonatomic) BOOL displaysAppStoreURLShortcutItem;
@property (readonly, nonatomic) BOOL representsWebApp;

- (id)representedSceneIdentifier;
- (id)_applicationRecordForDefaultBrowser;
- (BOOL)_isSaneURL;
- (id)applicationToLaunch;

@end
