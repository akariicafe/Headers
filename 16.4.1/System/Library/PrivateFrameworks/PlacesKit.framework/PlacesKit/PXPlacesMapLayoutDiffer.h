@class NSMutableArray;
@protocol PXPlacesMapLayoutResult;

@interface PXPlacesMapLayoutDiffer : NSObject {
    NSMutableArray *_changes;
}

@property (readonly, nonatomic) id<PXPlacesMapLayoutResult> sourceLayoutResult;
@property (readonly, nonatomic) id<PXPlacesMapLayoutResult> targetLayoutResult;

- (void).cxx_destruct;
- (id)computeChanges;
- (void)_computeChanges;
- (void)_addTargetLayoutItem:(id)a0;
- (void)_relateSourceLayoutItem:(id)a0 withTargetLayoutItem:(id)a1;
- (void)_removeSourceLayoutItem:(id)a0;
- (id)initWithSourceLayoutResult:(id)a0 targetLayoutResult:(id)a1;

@end
