@class HUCCGridViewController, HUCCModuleView, HUCCWarningLabelView, NSString, HUCCPageItemManager, UIViewPropertyAnimator;
@protocol HUCCModuleContentViewControllerDelegate, HUOpenURLHandling, NSObject;

@interface HUCCModuleContentViewController : UIViewController <HUCCGridViewControllerDelegate, HUCCModuleViewDelegate, HFItemManagerDelegate, CCUIContentModuleContentViewController>

@property (retain, nonatomic) HUCCModuleView *view;
@property (nonatomic) unsigned long long expandingState;
@property (nonatomic) unsigned long long contentViewState;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (retain, nonatomic) HUCCWarningLabelView *warningLabelView;
@property (retain, nonatomic) HUCCGridViewController *serviceGridViewController;
@property (retain, nonatomic) HUCCGridViewController *actionSetGridViewController;
@property (retain, nonatomic) HUCCPageItemManager *pageItemManager;
@property (nonatomic) unsigned long long activePage;
@property (retain, nonatomic) HUCCGridViewController *activePageViewController;
@property (nonatomic) BOOL hasAnyAccessoriesOrScenes;
@property (nonatomic) BOOL hasAlreadyPreloadedItems;
@property (retain, nonatomic) id<NSObject> activeAssertion;
@property (weak, nonatomic) id<HUCCModuleContentViewControllerDelegate> delegate;
@property (nonatomic) BOOL accessAllowedForCurrentLockState;
@property (retain, nonatomic) id<HUOpenURLHandling> URLHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;

- (BOOL)canDismissPresentedContent;
- (void)displayWillTurnOff;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)dismissPresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateContentView;
- (BOOL)_canShowWhileLocked;
- (void)viewWillLayoutSubviews;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (BOOL)isDeviceUnlockedForGridViewController:(id)a0;
- (id)prepareForActionRequiringDeviceUnlockForGridViewController:(id)a0;
- (void)_preferredPageDidChange;
- (void)_pageSwitchButtonPressed:(id)a0;
- (void)_updatePageSwitchButtonText;
- (void)_updatePageSwitchButtonHiddenState;
- (void)_updateSizeSubclassForViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)_pageViewControllerForActivePage;
- (void)_updatePageVisibility;
- (void)homeButtonPressedForModuleView:(id)a0;

@end
