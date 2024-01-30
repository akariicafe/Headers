@class SBBookmark, NSURL, UIWebClip;

@interface SBBookmarkIcon : SBLeafIcon

@property (retain, nonatomic) SBBookmark *bookmark;
@property (readonly, nonatomic) UIWebClip *webClip;
@property (readonly, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) NSURL *appStoreURL;
@property (readonly, nonatomic) BOOL displaysShareBookmarkShortcutItem;
@property (readonly, nonatomic) BOOL displaysAppStoreURLShortcutItem;
@property (readonly, nonatomic) BOOL representsWebApp;

- (id)iTunesCategoriesOrderedByRelevancy;
- (id)folderTitleOptions;
- (id)folderFallbackTitle;
- (id)initWithBookmark:(id)a0;
- (id)_sbhIconLibraryOverrideCollationSectionTitle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isBookmarkIcon;
- (BOOL)canBeAddedToMultiItemDrag;
- (id)representedSceneIdentifier;
- (BOOL)isAppClipIcon;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitle;
- (id)draggingUserActivity;
- (BOOL)canBeAddedToSubfolder;
- (id)applicationToLaunch;

@end
