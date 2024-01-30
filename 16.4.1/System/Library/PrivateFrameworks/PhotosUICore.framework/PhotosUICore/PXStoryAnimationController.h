@class NSCountedSet, PXStoryModel, NSMutableDictionary;

@interface PXStoryAnimationController : PXStoryController <PXStoryMutableAnimationController> {
    NSMutableDictionary *_animationInfoByIdentifier;
    NSCountedSet *_checkOutCountsByIdentifier;
    BOOL _isUpdatingAnimations;
}

@property (readonly, weak, nonatomic) PXStoryModel *model;

- (id)initWithModel:(id)a0;
- (void)addAnimation:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)_configureAnimation:(id)a0 withAnimationInfo:(id)a1;
- (void)_handleAnimationInvalidation;
- (void)_invalidateAnimations;
- (void)_updateAnimations;
- (void)checkInAnimation:(id)a0;
- (id)checkOutAnimationWithIdentifier:(id)a0 creationBlock:(id /* block */)a1;
- (void)configureUpdater:(id)a0;
- (void)enumerateAnimationsUsingBlock:(id /* block */)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithObservableModel:(id)a0;

@end
