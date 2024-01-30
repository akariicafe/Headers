@class NSCountedSet, PXStoryModel, NSMutableDictionary;

@interface PXStoryAnimationController : PXStoryController <PXStoryMutableAnimationController> {
    NSMutableDictionary *_animationInfoByIdentifier;
    NSCountedSet *_checkOutCountsByIdentifier;
    BOOL _isUpdatingAnimations;
}

@property (readonly, weak, nonatomic) PXStoryModel *model;

- (void)addAnimation:(id)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithModel:(id)a0;
- (void)_invalidateAnimations;
- (void)_updateAnimations;
- (id)initWithObservableModel:(id)a0;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (id)checkOutAnimationWithIdentifier:(id)a0 creationBlock:(id /* block */)a1;
- (void)checkInAnimation:(id)a0;
- (void)enumerateAnimationsUsingBlock:(id /* block */)a0;
- (void)_handleAnimationInvalidation;
- (void)_configureAnimation:(id)a0 withAnimationInfo:(id)a1;

@end
