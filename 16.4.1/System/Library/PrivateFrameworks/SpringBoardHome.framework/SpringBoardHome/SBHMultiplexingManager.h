@class NSMutableDictionary, NSMutableOrderedSet;
@protocol SBHMultiplexingManagerDelegate;

@interface SBHMultiplexingManager : NSObject

@property (weak, nonatomic) id<SBHMultiplexingManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *viewControllersForIdentifier;
@property (retain, nonatomic) NSMutableDictionary *multiplexingViewControllersForIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cachedRecentViewControllersForIdentifier;
@property (retain, nonatomic) NSMutableOrderedSet *cachedRecentViewControllerIdentifiers;
@property (nonatomic) unsigned long long cachedRecentViewControllerCountLimit;

- (id)activeMultiplexingViewControllerForIdentifier:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)discardMultiplexingViewController:(id)a0;
- (BOOL)_cacheLastDiscardedViewController:(id)a0 forIdentifier:(id)a1;
- (void)discardCachedRecentViewControllers;
- (void)validateActiveMultiplexingViewControllerForIdentifier:(id)a0;
- (void)_trimCachedRecentViewControllers;
- (BOOL)hasViewControllerForIdentifier:(id)a0;
- (id)viewControllerForIdentifier:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)_modifyViewControllersForIdentifier:(id)a0 reusingCacheViewControllersIfNecessary:(BOOL)a1 withBlock:(id /* block */)a2;
- (id)succinctDescription;
- (id)_activeMultiplexingViewControllerForIdentifier:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)setViewController:(id)a0 forIdentifier:(id)a1;
- (id)newMultiplexingViewControllerForIdentifier:(id)a0 atLevel:(double)a1;
- (id)description;
- (void)enumerateAllViewControllersUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)activeMultiplexingViewControllerForViewController:(id)a0;
- (void)discardCachedRecentViewControllersForIdentifier:(id)a0;

@end
