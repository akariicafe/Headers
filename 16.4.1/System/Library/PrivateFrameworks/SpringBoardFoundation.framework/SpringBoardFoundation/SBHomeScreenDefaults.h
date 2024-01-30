@class NSString, NSArray;

@interface SBHomeScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=isSidebarPinned) BOOL sidebarPinned;
@property (nonatomic) BOOL shouldUseLargeIcons;
@property (nonatomic) BOOL shouldFudgeShortcutsToCauseMaximumPain;
@property (nonatomic) BOOL shouldHideReportWidgetStackRotationQuickAction;
@property (nonatomic) BOOL shouldPrepareDefaultTodayList;
@property (nonatomic) BOOL shouldPrepareStackForDefaultTodayList;
@property (nonatomic) BOOL shouldUpgradeEnableWidgetSuggestions;
@property (nonatomic) BOOL shouldAddDefaultWidgetsToHomeScreen;
@property (nonatomic) BOOL enableModalWidgetDiscoverabilityForTesting;
@property (copy, nonatomic) NSString *overriddenScreenType;
@property (nonatomic) BOOL automaticallyAddsNewApplications;
@property (nonatomic) BOOL showsBadgesInAppLibrary;
@property (nonatomic) BOOL showsHomeScreenSearchAffordance;
@property (nonatomic) BOOL pagesHaveEverBeenHidden;
@property (nonatomic) BOOL shouldShowLibraryEducationView;
@property (nonatomic) BOOL shouldShowInternalWidgets;
@property (nonatomic) BOOL shouldShowWidgetIntroductionPopover;
@property (nonatomic) BOOL userHasDeletedSuggestedWidget;
@property (nonatomic) BOOL userDidUndoSuggestedWidget;
@property (nonatomic, getter=isWidgetScalingEnabled) BOOL widgetScalingEnabled;
@property (copy, nonatomic) NSArray *focusModesRequiringIntroduction;

@end
