@class NSString, NSDate;

@interface SBHomeScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=isSidebarVisible) BOOL sidebarVisible;
@property (nonatomic, getter=isSidebarPinned) BOOL sidebarPinned;
@property (nonatomic, getter=isLayoutLowDensity) BOOL layoutLowDensity;
@property (nonatomic) BOOL shouldFudgeShortcutsToCauseMaximumPain;
@property (nonatomic, getter=hasSidebarEverBeenVisible) BOOL sidebarEverBeenVisible;
@property (copy, nonatomic) NSDate *sidebarLearningCadenceCommenceDate;
@property (nonatomic) long long sidebarLearningCadenceEpoch;
@property (nonatomic) BOOL shouldAutoFillFavoriteList;
@property (nonatomic) BOOL shouldPrepareDefaultTodayList;
@property (nonatomic) BOOL shouldPrepareStackForDefaultTodayList;
@property (copy, nonatomic) NSString *overriddenScreenType;
@property (nonatomic) BOOL automaticallyAddsNewApplications;
@property (nonatomic) BOOL showsBadgesInAppLibrary;
@property (nonatomic) BOOL pagesHaveEverBeenHidden;
@property (nonatomic) BOOL pageHidingUIEverEntered;
@property (nonatomic) BOOL shouldShowLibraryEducationView;
@property (nonatomic) BOOL shouldShowAppLibraryOnBoardingAlert;
@property (nonatomic) BOOL shouldShowPageHidingOnBoardingAlert;
@property (nonatomic) BOOL shouldShowAvocadoWidgetsOnBoardingAlert;
@property (nonatomic) BOOL shouldShowInternalWidgets;

- (BOOL)hasLayoutLowDensityBeenAltered;
- (BOOL)automaticallyAddsNewApplicationsExists;
- (void)_bindAndRegisterDefaults;

@end
