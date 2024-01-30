@class NSString, UIImageView, UIImage, PXImageRequester, UIView, PXImageExtraction;
@protocol PXVideoOverlayButton, PXDisplayAsset, PXUIPlayButtonTileDelegate;

@interface PXUIPlayButtonTile : NSObject <PXChangeObserver, PXMutableUIPlayButtonTile, PXUIViewBasicTile> {
    UIView *_view;
    UIView<PXVideoOverlayButton> *_hifiPlayButtonView;
    UIView<PXVideoOverlayButton> *_playButtonView;
    UIView<PXVideoOverlayButton> *_labeledPlayButtonView;
    UIImageView *_playButtonBackgroundImageView;
    PXImageExtraction *_imageExtraction;
    id<PXDisplayAsset> _assetForImageExtraction;
    struct { BOOL backgroundImage; BOOL playButton; } _needsUpdate;
    BOOL _isPerformingChanges;
}

@property (nonatomic, setter=_setStyle:) long long _style;
@property (nonatomic, getter=_isAnimatingGeometry, setter=_setAnimatingGeometry:) BOOL _animatingGeometry;
@property (nonatomic, setter=_setAnimationCount:) unsigned long long _animationCount;
@property (retain, nonatomic, setter=_setBackgroundImage:) UIImage *_backgroundImage;
@property (weak, nonatomic) id<PXUIPlayButtonTileDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double width; double height; } playButtonSize;
@property (readonly, nonatomic) long long playButtonStyle;
@property (readonly, copy, nonatomic) NSString *playButtonTitle;
@property (readonly, nonatomic) PXImageRequester *imageRequester;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } imageViewportLocation;
@property (readonly, nonatomic) BOOL allowsBackdropStatisticsSuppression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;

+ (struct CGSize { double x0; double x1; })preferredSize;

- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (BOOL)_needsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)prepareForReuse;
- (void)didTapButton:(id)a0;
- (void)setPlayButtonSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void)_invalidateBackgroundImage;
- (void).cxx_destruct;
- (void)_handleExtractionResult:(id)a0 isPlaceholder:(BOOL)a1 extraction:(id)a2;
- (void)_invalidatePlayButton;
- (void)_resetHifiPlayButton;
- (void)_updateBackgroundImageIfNeeded;
- (void)_updatePlayButtonViewIfNeeded;
- (void)didAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 toUserData:(id)a1 withOptions:(id)a2;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;
- (void)setAllowsBackdropStatisticsSuppression:(BOOL)a0;
- (void)setImageRequester:(id)a0;
- (void)setImageViewportLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)setPlayButtonStyle:(long long)a0;
- (void)setPlayButtonTitle:(id)a0;
- (void)willAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 toUserData:(id)a1 withOptions:(id)a2;

@end
