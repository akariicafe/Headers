@class SFSearchResult, TLKProminenceView, NSURL, NSString;
@protocol SearchUIHomeScreenEngagementDelegate;

@interface SearchUIHomeScreenAppIconView : SBIconView <SBLeafIconDataSource, SBIconViewDelegate>

@property (retain) SFSearchResult *searchResult;
@property (retain) TLKProminenceView *placeholderView;
@property (retain) TLKProminenceView *focusHighlightView;
@property (copy, nonatomic) NSURL *applicationBundleURL;
@property (copy, nonatomic) NSString *applicationShortcutWidgetBundleIdentifier;
@property BOOL labelNeedsUpdateOnMovingToWindow;
@property (weak, nonatomic) id<SearchUIHomeScreenEngagementDelegate> engagementDelegate;
@property (nonatomic) unsigned long long variant;
@property (nonatomic) BOOL addRoundedKeyboardHighlight;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheForVariant:(unsigned long long)a0;
+ (id)applicationShortcutService;

- (BOOL)shouldHideShortcutsForAppIcon:(id)a0;
- (BOOL)icon:(id)a0 launchFromLocation:(id)a1 context:(id)a2;
- (unsigned long long)priorityForIcon:(id)a0;
- (void)tlk_updateForAppearance:(id)a0;
- (id)iconView:(id)a0 applicationShortcutItemsWithProposedItems:(id)a1;
- (id)icon:(id)a0 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (void)iconTapped:(id)a0;
- (id)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)a0;
- (BOOL)iconViewCanBeginDrags:(id)a0;
- (id)icon:(id)a0 displayNameForLocation:(id)a1;
- (void)launchIcon;
- (id)init;
- (BOOL)iconViewShouldBeginShortcutsPresentation:(id)a0;
- (void)setFocusHighlightFrame;
- (void)appIconsChanged:(id)a0;
- (void)iconViewWillBeginDrag:(id)a0 session:(id)a1;
- (BOOL)iconView:(id)a0 shouldActivateApplicationShortcutItem:(id)a1 atIndex:(unsigned long long)a2;
- (void).cxx_destruct;
- (BOOL)isTimedOutForIcon:(id)a0;
- (id)parallaxSettingsForShortcutsPresentationWithIconView:(id)a0;
- (void)_updateLabel;
- (void)screenTimeChanged;
- (void)resetImageWithAppIcon:(id)a0;
- (void)fetchApplicationShortcutInfoForIcon:(id)a0;
- (id)applicationBundleURLForShortcutsWithIconView:(id)a0;
- (long long)iconView:(id)a0 draggingStartLocationWithProposedStartLocation:(long long)a1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)fetchIconImageForIcon:(id)a0;
- (BOOL)shouldUseSecureWindowForShortcutsPresentationWithIconView:(id)a0;
- (void)didMoveToWindow;
- (void)setIcon:(id)a0;
- (void)layoutSubviews;
- (void)updateWithResult:(id)a0;

@end
