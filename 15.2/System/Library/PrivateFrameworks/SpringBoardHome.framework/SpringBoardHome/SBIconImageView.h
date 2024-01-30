@class SBIconProgressView, NSString, CAFilter, SBIcon, SBIconView, SBHIconImageCache, UIImage;

@interface SBIconImageView : UIView <SBIconObserver, SBIconProgressViewDelegate, SBHIconImageCacheObserver, SBReusableView, SBCrossfadingIconImageSource, BSDescriptionProviding> {
    CAFilter *_multiplyFilter;
    SBIconProgressView *_progressView;
    struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } _iconImageInfo;
    BOOL _hasSetIconImageInfo;
}

@property (copy, nonatomic) NSString *location;
@property (nonatomic) double overlayAlpha;
@property (readonly, nonatomic) SBIcon *icon;
@property (weak, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } iconImageInfo;
@property (nonatomic) double brightness;
@property (readonly, nonatomic) UIImage *displayedImage;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL showsSquareCorners;
@property (nonatomic, getter=isJittering) BOOL jittering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBounds;
@property (readonly, nonatomic) double continuousCornerRadius;

- (void)didEndAsynchronousImageLoadForIcon:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_generateSquareContentsImage;
- (void)layoutSubviews;
- (void)clearIconImageInfo;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)iconViewFolderIconImageCacheDidChange;
- (void)iconImageCache:(id)a0 didUpdateImageForIcon:(id)a1;
- (void)clearCachedImages;
- (void)progressViewCanBeRemoved:(id)a0;
- (void)updateImageAnimated:(BOOL)a0;
- (void)_clearProgressView;
- (void)_updateProgressMask;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setProgressAlpha:(double)a0;
- (BOOL)hasOpaqueImage;
- (void)_updateOverlayAlpha;
- (void)iconImageDidUpdate:(id)a0;
- (id)contentsImage;
- (id)squareContentsImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)iconViewLegibilitySettingsDidChange;
- (id)succinctDescription;
- (id)snapshot;
- (id)sourceView;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)prepareForReuse;
- (void)setIcon:(id)a0 location:(id)a1 animated:(BOOL)a2;
- (void)dealloc;
- (void)setProgressState:(long long)a0 paused:(BOOL)a1 percent:(double)a2 animated:(BOOL)a3;
- (void)willBeginAsynchronousImageLoadForIcon:(id)a0;

@end
