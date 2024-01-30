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

- (double)parallaxFactor;
- (struct CGSize { double x0; double x1; })_imageSize;
- (void)_setupContentViewWithOptions:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })_minimumContentOffsetForOverhang;
- (id)_newImageView;
- (BOOL)supportsCropping;
- (double)_throttleDuration;
- (void)_resetColorBoxes;
- (void).cxx_destruct;
- (void)setParallaxEnabled:(BOOL)a0;
- (void)_setupColorBoxObserver;
- (double)cropZoomScale;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (double)_parallaxFactorWithZoomScale:(double)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateScrollViewZoomScales;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (void)setContentView:(id)a0;
- (void)_updateParallaxForScroll;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (struct CGPoint { double x0; double x1; })_maximumContentOffsetForOverhang;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)didMoveToWindow;
- (id)_scrollView;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cropRect;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)_setupScrollViewObserver;
- (id)viewForZoomingInScrollView:(id)a0;
- (double)_scrollViewParallaxFactor;
- (id)_wallpaperImageForAnalysis;
- (void)_setupParallaxObserver;
- (void)_setupScrollView;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })_boundedContentOffsetForOverhang;

@end
