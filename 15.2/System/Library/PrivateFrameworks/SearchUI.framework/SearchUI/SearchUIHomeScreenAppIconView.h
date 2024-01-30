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

- (BOOL)shouldUseSecureWindowForShortcutsPresentationWithIconView:(id)a0;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)isTimedOutForIcon:(id)a0;
- (void)hidePlaceholder:(BOOL)a0;
- (unsigned long long)imageLoadingBehavior;
- (void)iconImageViewDidEndAsynchronousImageLoadForIcon:(id)a0;
- (void)icon:(id)a0 launchFromLocation:(id)a1 context:(id)a2;
- (void)iconTapped:(id)a0;
- (long long)_focusItemDeferralMode;
- (void)setFocusHighlightFrame;
- (void)_updateLabel;
- (BOOL)iconView:(id)a0 shouldActivateApplicationShortcutItem:(id)a1 atIndex:(unsigned long long)a2;
- (id)parallaxSettingsForShortcutsPresentationWithIconView:(id)a0;
- (BOOL)canBecomeFocused;
- (BOOL)iconViewShouldBeginShortcutsPresentation:(id)a0;
- (id)shortcutsDelegateForIconView:(id)a0;
- (BOOL)currentIconIsPlaceholder;
- (BOOL)iconViewShouldIncludeUninstallShortcutItem:(id)a0;
- (long long)iconView:(id)a0 draggingStartLocationWithProposedStartLocation:(long long)a1;
- (void)tlk_updateForAppearance:(id)a0;
- (BOOL)iconViewCanBeginDrags:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (BOOL)shouldHideShortcutsForAppIcon:(id)a0;
- (void)iconImageViewWillBeginAsynchronousImageLoadForIcon:(id)a0;
- (void)iconViewWillBeginDrag:(id)a0 session:(id)a1;
- (void)removePlaceholderAndSetShadowAnimated:(BOOL)a0;
- (void)didEngageWithTriggerEvent:(unsigned long long)a0 destination:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)delegate;
- (BOOL)canBecomeFirstResponder;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)_focusEffectStyle;
- (void)launchIcon;

@end
