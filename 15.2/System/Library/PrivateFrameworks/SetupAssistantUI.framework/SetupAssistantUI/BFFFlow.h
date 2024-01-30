@class NSMutableArray, NSArray, BFFFlowStarter, NSString, BFFNavigationController, UIViewController;
@protocol BFFFlowDelegate, BFFFlowItem, BFFFlowItemDelegate, BFFNavigationFlowDelegate;

@interface BFFFlow : NSObject <BFFFlowItemDelegate, BFFNavigationControllerDelegate, BFFFlowItem>

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

+ (id)cloudConfigSkipKey;
+ (id)internalSkipKey;

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)firstItem;
- (void)dealloc;
- (BOOL)controllerNeedsToRunForClass:(Class)a0;
- (id)precedingItems;
- (void)pushFlowItem:(id)a0 inFlow:(id)a1 withExtendedInitialization:(BOOL)a2 animated:(BOOL)a3;
- (void)pushFlowItem:(id)a0 inFlow:(id)a1 animated:(BOOL)a2;
- (id)precedingItemsClasses;
- (id)createFlowItem:(Class)a0;
- (id)initWithNavigationController:(id)a0 flowDelegate:(id)a1 flowStarter:(id)a2 dependencyInjector:(id /* block */)a3;
- (void)configureFlowItem:(id)a0;
- (id)controllerFollowingControllerClass:(Class)a0 requestedNext:(Class)a1;
- (void)flowItemDone:(id)a0 nextItem:(id)a1;
- (void)flowItemDone:(id)a0 nextItemClass:(Class)a1;
- (BOOL)isFlowItemOnTop:(id)a0;
- (id)popToBuddyControllerWithClass:(Class)a0 animated:(BOOL)a1;
- (id)popToBuddyControllerWithClass:(Class)a0 withOffset:(unsigned long long)a1 animated:(BOOL)a2;
- (void)pushFlowItem:(id)a0 animated:(BOOL)a1;
- (void)removeViewControllersOnNextPush:(id)a0;
- (id)_viewControllerForBuddyController:(id)a0;
- (void)flowItemCancelled:(id)a0;
- (void)flowItemDone:(id)a0;
- (void)startFlowAnimated:(BOOL)a0;

@end
