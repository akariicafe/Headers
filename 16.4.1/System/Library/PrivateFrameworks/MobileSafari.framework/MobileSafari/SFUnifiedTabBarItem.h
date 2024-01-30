@class SFNavigationBarItem, SFUnifiedTabBarItemView, NSString, UIImage, NSDate, NSUUID, NSArray;
@protocol SFMenuConfiguring;

@interface SFUnifiedTabBarItem : SFUnifiedBarItem <SFNavigationBarItemObserver, SFTabHoverPreviewItem>

@property (readonly, nonatomic) SFUnifiedTabBarItemView *itemView;
@property (retain, nonatomic) SFNavigationBarItem *navigationBarItem;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *lastReloadDate;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic) double downloadProgress;
@property (weak, nonatomic) id<SFMenuConfiguring> menuButtonConfigurator;
@property (nonatomic) unsigned long long menuButtonBadges;
@property (nonatomic) BOOL showsBadgeOnExtensionsButton;
@property (nonatomic, getter=isUnread) BOOL unread;
@property (copy, nonatomic) NSArray *shareParticipants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationBarItemDidUpdateShowsLockIcon:(id)a0;
- (void)navigationBarItemDidUpdateShowsTranslationIcon:(id)a0;
- (void)navigationBarItemDidUpdateShowsStopReloadButtons:(id)a0;
- (void)navigationBarItemDidUpdateShowsReaderButton:(id)a0;
- (void)navigationBarItemDidUpdateStopReloadButtonShowsStop:(id)a0;
- (void)navigationBarItemDidUpdateShowsTranslationButton:(id)a0;
- (void)navigationBarItemDidUpdateSecurityAnnotation:(id)a0;
- (void)navigationBarItemDidUpdateFormatButtonSelected:(id)a0;
- (void)navigationBarItemDidUpdateShowsSearchIndicator:(id)a0;
- (void)setDownloadProgress:(double)a0 animated:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (void)navigationBarItemDidUpdateText:(id)a0;
- (id)menuElementRepresentationWithSelectionHandler:(id /* block */)a0;
- (void)_configureItemView:(id)a0 isPreview:(BOOL)a1;
- (void)_showReaderAvailabilityLabelIfNeeded;
- (void)_showTranslationAvailabilityLabelIfNeeded;
- (void)configureItemView:(id)a0 isPreview:(BOOL)a1;
- (void)dismissAvailabilityOverlays;
- (void)navigationBarItemDidUpdateExtensionButtonConfiguration:(id)a0;
- (void)navigationBarItemDidUpdateShowsVoiceSearchButton:(id)a0;
- (void)setReusableView:(id)a0;
- (void)toggleExtensionBadge;

@end
