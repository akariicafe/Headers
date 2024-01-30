@class NSDictionary;

@interface CAMLivePhotoAnimationCache : NSObject

@property (readonly, nonatomic, getter=_isEmpty) BOOL _empty;
@property (retain, nonatomic, setter=_setAnimationFramesByColor:) NSDictionary *_animationFramesByColor;
@property (readonly, nonatomic) BOOL automaticModeAllowed;

- (id)initWithAutomaticModeAllowed:(BOOL)a0;
- (id)_actuallyLoadEnablingAnimationImagesForColors:(id)a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)_tintColorForMode:(long long)a0;
- (id)_colors;
- (void)preloadFramesIfNeeded;
- (id)framesForLivePhotoMode:(long long)a0;

@end
