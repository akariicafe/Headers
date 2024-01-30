@class UIWebClip, NSURL, CPSWebClip, SBHBookmark;

@interface SBHBookmarkIcon : SBLeafIcon

@property (retain, nonatomic) SBHBookmark *bookmark;
@property (readonly, nonatomic) UIWebClip *webClip;
@property (readonly, nonatomic) CPSWebClip *appClip;
@property (readonly, nonatomic) NSURL *launchURL;

- (id)initWithBookmark:(id)a0;
- (BOOL)canBeAddedToSubfolder;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canBeAddedToMultiItemDrag;
- (BOOL)isBookmarkIcon;
- (BOOL)isAppClipIcon;
- (id)_sbhIconLibraryOverrideCollationSectionTitle;
- (id)uninstallAlertTitle;
- (id)uninstallAlertBody;
- (id)draggingUserActivity;

@end
