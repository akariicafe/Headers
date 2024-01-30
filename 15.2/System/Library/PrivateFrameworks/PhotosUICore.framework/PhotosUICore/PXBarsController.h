@class NSMutableDictionary, NSArray, PXBarSpec, UIViewController;
@protocol PXActionPerformerDelegate;

@interface PXBarsController : NSObject {
    struct { BOOL needsUpdateBars; } _needsUpdateFlags;
}

@property (retain, nonatomic) PXBarSpec *barSpec;
@property (readonly, nonatomic) NSMutableDictionary *barButtonItemCache;
@property (readonly, nonatomic) NSMutableDictionary *barButtonItemCachedPlacement;
@property (readonly, nonatomic) double fixedSpaceForInterButtonSpacing;
@property (readonly, nonatomic) double fixedSpaceForEndButtonSpacing;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id<PXActionPerformerDelegate> actionPerformerDelegate;
@property (nonatomic) BOOL wantsAnimatedBarsUpdate;
@property (readonly, nonatomic) NSArray *leftBarButtonItemIdentifiers;
@property (readonly, nonatomic) NSArray *rightBarButtonItemIdentifiers;
@property (readonly, nonatomic) NSArray *toolbarItemIdentifiers;

- (void)updateIfNeeded;
- (void)viewControllerDidChange;
- (id)createBarButtonItemForIdentifier:(id)a0 placement:(unsigned long long)a1;
- (BOOL)_needsUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateBars;
- (void)updateBars;
- (void)_updateBarsIfNeeded;
- (id)_getCachedOrCreateNewBarButtonItemForIdentifier:(id)a0 placement:(unsigned long long)a1;
- (void)invalidateBarButtonItemWithIdentifier:(id)a0;
- (id)cachedBarButtonItemForIdentifier:(id)a0;
- (void)purgeCachedBarButtonItemsForIdentifiers:(id)a0;

@end
