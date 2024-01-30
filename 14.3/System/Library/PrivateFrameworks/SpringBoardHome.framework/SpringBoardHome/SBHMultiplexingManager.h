@class NSMutableDictionary, NSMutableOrderedSet;
@protocol SBHMultiplexingManagerDelegate;

@interface SBHMultiplexingManager : NSObject

@property (weak, nonatomic) id<SBHMultiplexingManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *viewControllersForIdentifier;
@property (retain, nonatomic) NSMutableDictionary *multiplexingViewControllersForIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cachedRecentViewControllersForIdentifier;
@property (retain, nonatomic) NSMutableOrderedSet *cachedRecentViewControllerIdentifiers;
@property (nonatomic) unsigned long long cachedRecentViewControllerCountLimit;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)activeMultiplexingViewControllerForViewController:(id)a0;
- (BOOL)hasViewControllerForIdentifier:(id)a0;
- (void)setViewController:(id)a0 forIdentifier:(id)a1;
- (id)newMultiplexingViewControllerForIdentifier:(id)a0 atLevel:(double)a1;
- (void)discardMultiplexingViewController:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)discardCachedRecentViewControllersForIdentifier:(id)a0;
- (BOOL)_cacheLastDiscardedViewController:(id)a0 forIdentifier:(id)a1;
- (id)activeMultiplexingViewControllerForIdentifier:(id)a0;
- (void)_modifyViewControllersForIdentifier:(id)a0 reusingCacheViewControllersIfNecessary:(BOOL)a1 withBlock:(id /* block */)a2;
- (id)_activeMultiplexingViewControllerForIdentifier:(id)a0;
- (void)_trimCachedRecentViewControllers;
- (void)validateActiveMultiplexingViewControllerForIdentifier:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;
- (id)viewControllerForIdentifier:(id)a0;
- (id)initWithDelegate:(id)a0;

@end
