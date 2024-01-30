@class NSMutableArray, NSArray, BFFFlowStarter, NSString, BFFNavigationController, UIViewController;
@protocol BFFFlowDelegate, BFFNavigationFlowDelegate, BFFFlowItem;

@interface BFFFlow : NSObject <BFFFlowItemDelegate, BFFNavigationControllerDelegate, BFFFlowItem>

@property (retain, nonatomic) UIViewController<BFFFlowItem> *firstController;
@property (retain, nonatomic) NSMutableArray *controllers;
@property (readonly, weak, nonatomic) BFFNavigationController *navigationController;
@property (readonly, weak, nonatomic) id<BFFNavigationFlowDelegate> navigationFlowDelegate;
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

- (id)firstItem;
- (void).cxx_destruct;
- (void)dealloc;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)flowItemDone:(id)a0 nextItemClass:(Class)a1;
- (id)precedingItems;
- (id)precedingItemsClasses;
- (id)createFlowItem:(Class)a0;
- (id)initWithNavigationController:(id)a0 flowDelegate:(id)a1 flowStarter:(id)a2 dependencyInjector:(id /* block */)a3;
- (void)configureFlowItem:(id)a0;
- (id)controllerFollowingControllerClass:(Class)a0 requestedNext:(Class)a1;
- (void)flowItemDone:(id)a0 nextItem:(id)a1;
- (id)_viewControllerForBuddyController:(id)a0;
- (void)flowItemCancelled:(id)a0;
- (void)flowItemDone:(id)a0;
- (void)startFlowAnimated:(BOOL)a0;

@end
