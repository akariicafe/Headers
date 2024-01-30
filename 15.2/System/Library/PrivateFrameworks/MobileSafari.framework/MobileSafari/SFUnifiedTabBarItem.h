@class NSDate, NSString, UIImage, _SFFluidProgressView, NSUUID, NSArray, SFNavigationBarItem, SFUnifiedTabBarItemView;

@interface SFUnifiedTabBarItem : SFUnifiedBarItem <SFNavigationBarItemObserver, SFTabHoverPreviewItem>

@property (readonly, nonatomic) SFUnifiedTabBarItemView *itemView;
@property (nonatomic) long long badgeOnMenuButton;
@property (retain, nonatomic) SFNavigationBarItem *navigationBarItem;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *lastReloadDate;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (retain, nonatomic) _SFFluidProgressView *progressView;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) double downloadProgress;
@property (nonatomic) BOOL hasUnviewedDownloads;
@property (copy, nonatomic) NSArray *extensionButtons;
@property (nonatomic) BOOL showsBadgeOnExtensionsButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setDownloadProgress:(double)a0 animated:(BOOL)a1;
- (id)init;
- (void)setReusableView:(id)a0;
- (void)navigationBarItemDidUpdateText:(id)a0;
- (void)navigationBarItemDidUpdateShowsLockIcon:(id)a0;
- (void)navigationBarItemDidUpdateShowsSearchIndicator:(id)a0;
- (void)navigationBarItemDidUpdateShowsStopReloadButtons:(id)a0;
- (void)navigationBarItemDidUpdateStopReloadButtonShowsStop:(id)a0;
- (void)navigationBarItemDidUpdateFormatButtonSelected:(id)a0;
- (void)navigationBarItemDidUpdateShowsReaderButton:(id)a0;
- (void)navigationBarItemDidUpdateShowsNotSecureAnnotation:(id)a0;
- (void)navigationBarItemDidUpdateProgressView:(id)a0;
- (void)navigationBarItemDidUpdateShowsTranslationIcon:(id)a0;
- (void)navigationBarItemDidUpdateShowsTranslationButton:(id)a0;
- (void)navigationBarItemDidUpdateShowsVoiceSearchButton:(id)a0;
- (void)configureItemView:(id)a0;
- (void)dismissAvailabilityOverlays;
- (void)toggleExtensionBadge;

@end
