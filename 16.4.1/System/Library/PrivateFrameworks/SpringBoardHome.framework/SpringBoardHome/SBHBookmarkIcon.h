@class UIWebClip, NSURL, CPSWebClip, SBHBookmark;

@interface SBHBookmarkIcon : SBLeafIcon

@property (retain, nonatomic) SBHBookmark *bookmark;
@property (readonly, nonatomic) UIWebClip *webClip;
@property (readonly, nonatomic) CPSWebClip *appClip;
@property (readonly, nonatomic) NSURL *launchURL;

- (id)initWithBookmark:(id)a0;
- (BOOL)canBeAddedToSubfolder;
- (BOOL)canBeAddedToMultiItemDrag;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_sbhIconLibraryOverrideCollationSectionTitle;
- (id)draggingUserActivity;
- (BOOL)isAppClipIcon;
- (BOOL)isBookmarkIcon;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitle;

@end
