@class NSArray, UIColor, NSString;

@interface TSAViewController : UIViewController

@property (nonatomic) BOOL viewDidAppear;
@property (nonatomic) BOOL showFirstLaunchCoachingTipAfterViewAppears;
@property (nonatomic) BOOL firstLaunchCoachingTipsWereShowingBeforeRotation;
@property (nonatomic) BOOL coachingTipsWereShowingBeforeRotation;
@property (nonatomic) BOOL shouldShowHelpOnAppear;
@property (readonly, nonatomic) BOOL isViewVisible;
@property (readonly, nonatomic) BOOL isLayoutBelowApplicationToolbar;
@property (retain, nonatomic) NSArray *leftApplicationToolbarItems;
@property (retain, nonatomic) NSArray *rightApplicationToolbarItems;
@property (readonly, nonatomic) double leftToolbarItemsInset;
@property (readonly, nonatomic) double rightToolbarItemsInset;
@property (nonatomic) double leftToolbarItemsMaximumWidth;
@property (nonatomic) double rightToolbarItemsMaximumWidth;
@property (readonly, nonatomic) UIColor *applicationBackgroundColor;
@property (readonly, nonatomic) UIColor *applicationToolbarTitleColor;
@property (readonly, nonatomic) UIColor *applicationToolbarTintColor;
@property (readonly, nonatomic) UIColor *applicationToolbarBackgroundColor;
@property (readonly, nonatomic) NSString *toolbarButtonModalGearImageName;
@property (readonly, nonatomic, getter=isPresentingModalViewController) BOOL presentingModalViewController;
@property (readonly, nonatomic) id coachingTipsButton;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)toolbarButtonForModalDoneWithTarget:(id)a0 action:(SEL)a1;
- (id)toolbarButtonWithImageName:(id)a0 target:(id)a1 action:(SEL)a2;
- (id)toolbarButtonWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 isModal:(BOOL)a3;
- (void)p_stopListeningForVoiceOverNotifications;
- (void)showFirstLaunchCoachingTipIfNecessary;
- (void)p_startListeningForVoiceOverNotifications;
- (void)p_voiceOverStatusDidChange;
- (void)dismissCoachingTips;
- (void)hideFirstLaunchCoachingTipIfNecessary;
- (id)toolbarButtonWithImageName:(id)a0 disabledImageName:(id)a1 target:(id)a2 action:(SEL)a3;
- (id)toolbarButtonForCoachingTipsWithTarget:(id)a0 action:(SEL)a1;
- (void)willSetupApplicationToolbar;
- (id)toolbarButtonForUndoWithIsModal:(BOOL)a0;
- (id)toolbarButtonForModalDone;
- (BOOL)modalToolbarSupportsUndo;
- (id)imageViewFromSnapshotOfView:(id)a0;
- (void)toggleCoachingTips:(id)a0;
- (void)willShowCoachingTips;
- (void)willHideCoachingTips;
- (id)toolbarButtonItemForCoachingTipsWithTarget:(id)a0 action:(SEL)a1;
- (void)showHelpWithTopicId:(id)a0 completion:(id /* block */)a1;
- (void)dismissHelpWithCompletion:(id /* block */)a0;
- (BOOL)isFirstLaunchCoachingTipShowing;
- (id)firstLaunchCoachingTipShownUserDefaultKey;

@end
