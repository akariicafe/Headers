@class NSString, UIImageView, SBFWallpaperParallaxSettings, UIScrollView, SBFSubject;
@protocol SBFCancelable;

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate> {
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    SBFWallpaperParallaxSettings *_parallaxSettings;
    SBFSubject *_scrollViewObserver;
    id<SBFCancelable> _colorBoxCancelToken;
    id<SBFCancelable> _parallaxCancelToken;
    double _minimumZoomScaleForParallax;
    double _minimumZoomScale;
}

@property (nonatomic) BOOL automaticallyEnablesParallax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_canCacheImages;
+ (BOOL)_canDownscaleSampleImage;
+ (BOOL)_shouldScaleForParallax;

- (BOOL)supportsCropping;
- (void)_setupContentViewWithOptions:(unsigned long long)a0;
- (void)_updateParallaxForScroll;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (struct CGPoint { double x0; double x1; })_maximumContentOffsetForOverhang;
- (void)layoutSubviews;
- (void)_resetColorBoxes;
- (id)_newImageView;
- (void)setParallaxEnabled:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRect;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)_setupScrollView;
- (struct CGPoint { double x0; double x1; })_boundedContentOffsetForOverhang;
- (struct CGSize { double x0; double x1; })_imageSize;
- (double)_throttleDuration;
- (double)cropZoomScale;
- (double)parallaxFactor;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (double)_scrollViewParallaxFactor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cropRect;
- (void)_setupScrollViewObserver;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)_wallpaperImageForAnalysis;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGPoint { double x0; double x1; })_minimumContentOffsetForOverhang;
- (void)_setupColorBoxObserver;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)_updateScrollViewZoomScales;
- (double)_parallaxFactorWithZoomScale:(double)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)dealloc;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (void)didMoveToWindow;
- (void)setContentView:(id)a0;
- (id)_scrollView;
- (void)_setupParallaxObserver;

@end
