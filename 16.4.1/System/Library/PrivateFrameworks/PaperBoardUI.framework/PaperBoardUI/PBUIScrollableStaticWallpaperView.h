@class BSAtomicFlag, NSString, UIImageView, UIScrollView, NSObject, PBUIWallpaperParallaxSettings;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PBUIScrollableStaticWallpaperView : PBUIStaticWallpaperView <UIScrollViewDelegate> {
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    PBUIWallpaperParallaxSettings *_parallaxSettings;
    double _minimumZoomScaleForParallax;
    double _minimumZoomScale;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_throttleTimer;
    BSAtomicFlag *_throttleCanUpdateFlag;
}

@property (nonatomic) BOOL automaticallyEnablesParallax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_canCacheImages;
+ (BOOL)_shouldScaleForParallax;
+ (BOOL)_canDownscaleSampleImage;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRect;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (void)_setupContentViewWithOptions:(unsigned long long)a0;
- (double)_scrollViewParallaxFactor;
- (id)_newImageView;
- (double)parallaxFactor;
- (void)setParallaxEnabled:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })_maximumContentOffsetForOverhang;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)_scrollViewDidUpdate;
- (double)_throttleDuration;
- (void)_setupScrollView;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })_imageSize;
- (struct CGPoint { double x0; double x1; })_boundedContentOffsetForOverhang;
- (BOOL)supportsCropping;
- (void)_updateScrollViewZoomScales;
- (id)_wallpaperImageForAnalysis;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)_cancelThrottle;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (double)cropZoomScale;
- (void)_resetColorBoxes;
- (struct CGPoint { double x0; double x1; })_minimumContentOffsetForOverhang;
- (id)_scrollView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cropRect;
- (double)_parallaxFactorWithZoomScale:(double)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateParallaxForScroll;
- (void)dealloc;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)setContentView:(id)a0;

@end
