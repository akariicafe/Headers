@class SearchUIRowModel, TLKProminenceView, NSString;
@protocol SearchUIHomeScreenEngagementDelegate, SearchUIFeedbackDelegate;

@interface SearchUIHomeScreenAppIconView : SBIconView <SBIconViewDelegate, SBIconDelegate>

@property (retain) SearchUIRowModel *rowModel;
@property (retain) TLKProminenceView *placeholderView;
@property (retain) TLKProminenceView *focusHighlightView;
@property BOOL labelNeedsUpdateOnMovingToWindow;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) id<SearchUIHomeScreenEngagementDelegate> engagementDelegate;
@property (nonatomic) unsigned long long variant;
@property (nonatomic) BOOL addRoundedKeyboardHighlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheForVariant:(unsigned long long)a0;

- (void)_dynamicUserInterfaceTraitDidChange;
- (id)delegate;
- (void)tlk_updateForAppearance:(id)a0;
- (BOOL)iconViewShouldBeginShortcutsPresentation:(id)a0;
- (void)iconViewWillBeginDrag:(id)a0 session:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)isTimedOutForIcon:(id)a0;
- (void)didEngageWithTriggerEvent:(unsigned long long)a0 destination:(unsigned long long)a1;
- (BOOL)iconView:(id)a0 shouldActivateApplicationShortcutItem:(id)a1 atIndex:(unsigned long long)a2;
- (id)focusEffect;
- (unsigned long long)imageLoadingBehavior;
- (void)didMoveToWindow;
- (BOOL)currentIconIsPlaceholder;
- (void)iconImageViewDidEndAsynchronousImageLoadForIcon:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (long long)iconView:(id)a0 draggingStartLocationWithProposedStartLocation:(long long)a1;
- (void)iconTapped:(id)a0;
- (void)icon:(id)a0 launchFromLocation:(id)a1 context:(id)a2;
- (BOOL)canBecomeFocused;
- (void)launchIcon;
- (id)shortcutsDelegateForIconView:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (long long)_focusItemDeferralMode;
- (void)layoutSubviews;
- (BOOL)iconViewShouldIncludeUninstallShortcutItem:(id)a0;
- (BOOL)shouldUseSecureWindowForShortcutsPresentationWithIconView:(id)a0;
- (id)init;
- (BOOL)shouldHideShortcutsForAppIcon:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)iconImageViewWillBeginAsynchronousImageLoadForIcon:(id)a0;
- (void)_updateLabel;
- (id)parallaxSettingsForShortcutsPresentationWithIconView:(id)a0;
- (BOOL)iconViewCanBeginDrags:(id)a0;
- (void).cxx_destruct;
- (void)hidePlaceholder:(BOOL)a0;
- (void)setFocusHighlightFrame;
- (void)removePlaceholderAndSetShadowAnimated:(BOOL)a0;

@end
