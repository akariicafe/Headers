@class NSString, NSDate;

@interface SBHomeScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=isSidebarVisible) BOOL sidebarVisible;
@property (nonatomic, getter=isSidebarPinned) BOOL sidebarPinned;
@property (nonatomic, getter=isLayoutLowDensity) BOOL layoutLowDensity;
@property (nonatomic, getter=isLayoutRestrictedWidgets) BOOL layoutRestrictedWidgets;
@property (nonatomic) BOOL shouldUseLargeIcons;
@property (nonatomic) BOOL shouldFudgeShortcutsToCauseMaximumPain;
@property (nonatomic) BOOL shouldHideReportWidgetStackRotationQuickAction;
@property (nonatomic, getter=hasSidebarEverBeenVisible) BOOL sidebarEverBeenVisible;
@property (copy, nonatomic) NSDate *sidebarLearningCadenceCommenceDate;
@property (nonatomic) long long sidebarLearningCadenceEpoch;
@property (nonatomic) BOOL shouldAutoFillFavoriteList;
@property (nonatomic) BOOL shouldPrepareDefaultTodayList;
@property (nonatomic) BOOL shouldPrepareStackForDefaultTodayList;
@property (nonatomic) BOOL shouldUpgradeEnableWidgetSuggestions;
@property (nonatomic) BOOL shouldAddDefaultWidgetsToHomeScreen;
@property (nonatomic) BOOL enableModalWidgetDiscoverabilityForTesting;
@property (copy, nonatomic) NSString *overriddenScreenType;
@property (nonatomic) BOOL automaticallyAddsNewApplications;
@property (nonatomic) BOOL showsBadgesInAppLibrary;
@property (nonatomic) BOOL pagesHaveEverBeenHidden;
@property (nonatomic) BOOL shouldShowLibraryEducationView;
@property (nonatomic) BOOL shouldShowInternalWidgets;
@property (nonatomic) BOOL shouldShowWidgetIntroductionPopover;
@property (nonatomic) BOOL userHasDeletedSuggestedWidget;
@property (nonatomic) BOOL userDidUndoSuggestedWidget;
@property (nonatomic, getter=isWidgetScalingEnabled) BOOL widgetScalingEnabled;

- (void)_bindAndRegisterDefaults;
- (BOOL)hasLayoutLowDensityBeenAltered;
- (BOOL)automaticallyAddsNewApplicationsExists;

@end
