@class NSArray, _PUVideoView, UIImage, UIImageView;
@protocol PUVideoPlayerViewDelegate;

@interface PUVideoPlayerView : UIView {
    _PUVideoView *_videoView;
    NSArray *_videoViewConstraints;
    UIImageView *_previewImageView;
    NSArray *_previewImageViewConstraints;
}

@property (nonatomic) BOOL isReadyForVideoDisplay;
@property (nonatomic) BOOL isDisplayingVideo;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } placeholderImageContentsRect;
@property (nonatomic) BOOL isDisplayingPlaceholder;
@property (nonatomic) unsigned long long videoViewContentMode;
@property (weak, nonatomic) id<PUVideoPlayerViewDelegate> delegate;
@property (nonatomic) BOOL allowsEdgeAntialiasing;

- (void)layoutSubviews;
- (id)generateSnapshotImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)configureWithAVPlayer:(id)a0;
- (void)_installNewVideoViewIfNecessaryWithPlayer:(id)a0;
- (void)_updateContentMode;
- (void)_updateEdgeAntialiasing;
- (void)_updateSubviewsVisibility;

@end
