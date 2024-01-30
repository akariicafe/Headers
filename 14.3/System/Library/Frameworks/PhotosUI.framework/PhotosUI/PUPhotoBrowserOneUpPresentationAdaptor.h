@class NSSet, NSString;
@protocol PUPhotoBrowserZoomTransitionDelegate;

@interface PUPhotoBrowserOneUpPresentationAdaptor : NSObject <PUOneUpPresentationHelperAssetDisplayDelegate> {
    struct { BOOL respondsToTransitionImageForPhotoToken; BOOL respondsToWillBeginForOperation; BOOL respondsToDidFinishForOperation; BOOL respondsToWillBeginAnimationForOperation; BOOL respondsToDidFinishAnimationForOperation; BOOL respondsToShouldHidePhotosTokens; BOOL respondsToSetVisibilityForPhotoToken; } _zoomTransitionDelegateFlags;
}

@property (copy, nonatomic, setter=_setPhotoTokensForHiddenAssetReferences:) NSSet *_photoTokensForHiddenAssetReferences;
@property (nonatomic, setter=_setShouldDisableScroll:) BOOL _shouldDisableScroll;
@property (weak, nonatomic) id<PUPhotoBrowserZoomTransitionDelegate> zoomTransitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })oneUpPresentationHelper:(id)a0 rectForAssetReference:(id)a1 cropInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a2 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (id)_photoTokenForAssetReference:(id)a0;
- (void)oneUpPresentationHelper:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (void)oneUpPresentationHelper:(id)a0 shouldHideAssetReferences:(id)a1;
- (void)oneUpPresentationHelper:(id)a0 shouldDisableScroll:(BOOL)a1;
- (id)oneUpPresentationHelper:(id)a0 currentImageForAssetReference:(id)a1;

@end
