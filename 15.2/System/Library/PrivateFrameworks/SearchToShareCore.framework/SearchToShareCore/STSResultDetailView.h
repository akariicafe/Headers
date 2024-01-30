@class STSResultDetailFooter, STSAnimatedImageInfo, NSString, UIImage, UIView, UIVisualEffectView, UIImageView;
@protocol STSResultDetailViewDelegate;

@interface STSResultDetailView : UIView {
    UIVisualEffectView *_backgroundView;
    UIImageView *_thumbnailView;
    STSResultDetailFooter *_footer;
}

@property (weak, nonatomic) id<STSResultDetailViewDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) UIView *customContentView;
@property (readonly, nonatomic) UIImage *thumbnail;
@property (readonly, nonatomic) STSAnimatedImageInfo *thumbnailInfo;
@property (nonatomic) struct CGSize { double x0; double x1; } providerIconSize;
@property (retain, nonatomic) UIImage *providerIcon;
@property (copy, nonatomic) NSString *providerName;
@property (nonatomic) BOOL isFullscreen;
@property (nonatomic) BOOL useBackgroundBlur;

- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateWithThumbnail:(id)a0 orThumbnailInfo:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 traitCollection:(id)a1;
- (void)_didTapProvider:(id)a0;
- (void)_didTapSend:(id)a0;
- (void)_calculateFramesForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 traitCollection:(id)a1 andSetFrames:(BOOL)a2 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;

@end
