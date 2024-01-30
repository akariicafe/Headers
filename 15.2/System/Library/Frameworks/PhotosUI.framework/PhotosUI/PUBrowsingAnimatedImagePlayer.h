@class PHAnimatedImage, NSMutableSet, PUMediaProvider;
@protocol PUDisplayAsset;

@interface PUBrowsingAnimatedImagePlayer : PUViewModel {
    struct { BOOL animatedImage; } _isValid;
}

@property (retain, nonatomic, setter=_setAnimatedImage:) PHAnimatedImage *animatedImage;
@property (nonatomic, setter=_setAnimatedImageLoadingAllowed:) BOOL isAnimatedImageLoadingAllowed;
@property (retain, nonatomic) NSMutableSet *_animatedImageLoadingDisablingReasons;
@property (nonatomic, setter=_setAnimatedImageRequestID:) int _animatedImageRequestID;
@property (retain, nonatomic) id<PUDisplayAsset> asset;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;

- (id)newViewModelChange;
- (void)didPerformChanges;
- (void)_invalidateAnimatedImage;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1;
- (void)unloadAnimatedImage;
- (void)setAnimatedImageLoadingDisabled:(BOOL)a0 forReason:(id)a1;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)_cancelLoading;
- (void)_updateAnimatedImage;
- (void)_handleAnimatedImageRequestComplete:(id)a0;
- (id)debugDetailedDescription;
- (void)dealloc;

@end
