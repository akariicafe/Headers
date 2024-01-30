@class _TtC7FocusUI26ActivityEditViewController, FCActivityManager, NSString;

@interface FCUIActivityPickerViewController : UIViewController <FCActivityManagerObserving> {
    BOOL _isConfiguringEducationCard;
}

@property (class, readonly, nonatomic, getter=isOnboardingEncountered) BOOL onboardingEncountered;
@property (class, readonly, nonatomic, getter=isOnboardingComplete) BOOL onboardingComplete;

@property (retain, nonatomic, getter=_activityManager, setter=_setActivityManager:) FCActivityManager *activityManager;
@property (retain, nonatomic, getter=_editViewController, setter=_setEditViewController:) _TtC7FocusUI26ActivityEditViewController *editViewController;
@property (nonatomic, getter=isFooterPinnedToBottom) BOOL footerPinnedToBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)_markOnboardingEncountered;
+ (void)_markOnboardingComplete;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)_openURL:(id)a0;
- (void)_updatePreferredContentSize;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)availableActivitiesDidChangeForManager:(id)a0;
- (void)activityManager:(id)a0 lifetimeDescriptionsDidChangeForActivity:(id)a1;
- (void)activeActivityDidChangeForManager:(id)a0;
- (void)activeActivityLifetimeDidChangeForManager:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setExpandedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 representedActivity:(id)a2 presentationStyle:(long long)a3 transitionCoordinator:(id)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setContractedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 representedActivity:(id)a1 presentationStyle:(long long)a2 transitionCoordinator:(id)a3;
- (id)_activityListView;
- (void)_configureActivityListViewWithAvailableActivities:(id)a0;
- (void)_configureActivityView:(id)a0 withLifetimesDescriptionsForActivity:(id)a1;
- (void)_updateSelectedStateOfActivityViews;
- (BOOL)_updateHeaderOrFooterIfNecessary;
- (void)_updateSelectedStateOfActivityControl:(id)a0 activeActivity:(id)a1 lifetimeOfActiveActivity:(id)a2;
- (void)_presentActivityEditUI:(id)a0;
- (BOOL)_isConfiguringEducationCard;
- (void)_setConfiguringEducationCard:(BOOL)a0;
- (void)_dismissHeader;
- (void)_configureEducationCardIfNecessary;
- (void)_openSetupUI:(id)a0;
- (void)_openEditUI:(id)a0;

@end
