@class PXGadgetSpec, NSString, PXGadgetSpecManager;

@interface PXStoryHorizontalGadgetViewLayoutSpecManager : PXStoryFeedViewLayoutSpecManager <PXChangeObserver>

@property (readonly, nonatomic) PXGadgetSpecManager *gadgetSpecManager;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)_updateSpec;
- (void)_invalidateSpec;
- (id)initWithGadgetSpec:(id)a0;
- (id)initWithGadgetSpecManager:(id)a0;
- (void)_invalidateGadgetSpec;
- (void)_updateGadgetSpec;

@end
