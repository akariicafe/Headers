@class NSMutableDictionary, NSArray, PXBarSpec, UIViewController;
@protocol PXBarsControllerDelegate, PXActionPerformerDelegate;

@interface PXBarsController : NSObject {
    struct { BOOL needsUpdateBars; } _needsUpdateFlags;
}

@property (retain, nonatomic) PXBarSpec *barSpec;
@property (readonly, nonatomic) NSMutableDictionary *barButtonItemCache;
@property (readonly, nonatomic) NSMutableDictionary *barButtonItemCachedPlacement;
@property (readonly, nonatomic) double fixedSpaceForInterButtonSpacing;
@property (readonly, nonatomic) double fixedSpaceForEndButtonSpacing;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id<PXBarsControllerDelegate> delegate;
@property (weak, nonatomic) id<PXActionPerformerDelegate> actionPerformerDelegate;
@property (nonatomic) BOOL wantsAnimatedBarsUpdate;
@property (readonly, nonatomic) NSArray *leftBarButtonItemIdentifiers;
@property (readonly, nonatomic) NSArray *rightBarButtonItemIdentifiers;
@property (readonly, nonatomic) NSArray *toolbarItemIdentifiers;

- (void)updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)updateBars;
- (id)init;
- (void)viewControllerDidChange;
- (id)createBarButtonItemForIdentifier:(id)a0 placement:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)_getCachedOrCreateNewBarButtonItemForIdentifier:(id)a0 placement:(unsigned long long)a1;
- (void)_updateBarsIfNeeded;
- (id)cachedBarButtonItemForIdentifier:(id)a0;
- (void)invalidateBarButtonItemWithIdentifier:(id)a0;
- (void)invalidateBars;
- (void)purgeCachedBarButtonItemsForIdentifiers:(id)a0;

@end
