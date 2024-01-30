@class NSMutableArray, NSArray, BFFFlowStarter, NSString, BFFNavigationController, UIViewController;
@protocol BFFFlowDelegate, BFFFlowItem, BFFFlowItemDelegate, BFFNavigationFlowDelegate;

@interface BFFFlow : NSObject <BFFFlowDelegate, BFFFlowItemDelegate, BFFNavigationControllerDelegate, BFFFlowItem>

@property (retain, nonatomic) UIViewController<BFFFlowItem> *firstController;
@property (retain, nonatomic) NSMutableArray *controllers;
@property (readonly, weak, nonatomic) BFFNavigationController *navigationController;
@property (readonly, weak, nonatomic) id<BFFNavigationFlowDelegate> navigationFlowDelegate;
@property (weak, nonatomic) id<BFFFlowItemDelegate> flowItemDelegate;
@property (weak, nonatomic) id<BFFFlowDelegate> delegate;
@property (readonly, weak, nonatomic) BFFFlowStarter *starter;
@property (retain, nonatomic) NSArray *classList;
@property (readonly, copy, nonatomic) id /* block */ injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)internalSkipKey;
+ (id)allowedFlowItems;
+ (id)cloudConfigSkipKey;

- (id)viewControllers;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)dealloc;
- (id)firstItem;
- (void).cxx_destruct;
- (id)createFlowItem:(Class)a0;
- (id)_createConditionalFlowItemForClass:(Class)a0;
- (id)_viewControllerForBuddyController:(id)a0;
- (void)configureFlowItem:(id)a0;
- (id)controllerFollowingControllerClass:(Class)a0 requestedNext:(Class)a1;
- (BOOL)controllerNeedsToRunForClass:(Class)a0;
- (void)flow:(id)a0 finishedWithLastItem:(id)a1 nextItem:(id)a2;
- (void)flowItemCancelled:(id)a0;
- (void)flowItemDone:(id)a0;
- (void)flowItemDone:(id)a0 nextItem:(id)a1;
- (void)flowItemDone:(id)a0 nextItemClass:(Class)a1;
- (id)initWithNavigationController:(id)a0 flowDelegate:(id)a1 flowStarter:(id)a2 dependencyInjector:(id /* block */)a3;
- (BOOL)isFlowItemOnTop:(id)a0;
- (id)popToBuddyControllerWithClass:(Class)a0 animated:(BOOL)a1;
- (id)popToBuddyControllerWithClass:(Class)a0 withOffset:(unsigned long long)a1 animated:(BOOL)a2;
- (id)precedingItems;
- (id)precedingItemsClasses;
- (void)presentWiFiPaneForFlow:(id)a0;
- (void)pushFlowItem:(id)a0 animated:(BOOL)a1;
- (void)pushFlowItem:(id)a0 inFlow:(id)a1 animated:(BOOL)a2;
- (void)pushFlowItem:(id)a0 inFlow:(id)a1 withExtendedInitialization:(BOOL)a2 animated:(BOOL)a3;
- (void)pushFlowItem:(id)a0 inFlow:(id)a1 withExtendedInitialization:(BOOL)a2 animated:(BOOL)a3 willPushFlowItem:(id /* block */)a4;
- (void)removeViewControllersOnNextPush:(id)a0;
- (void)startFlowAnimated:(BOOL)a0;

@end
