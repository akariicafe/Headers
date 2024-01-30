@class NSArray, ISWrappedAVPlayer, UIImage, PXVideoView, UIImageView;
@protocol PXVideoPlayerViewDelegate;

@interface PXVideoPlayerView : UIView {
    PXVideoView *_videoView;
    NSArray *_videoViewConstraints;
    UIImageView *_previewImageView;
    NSArray *_previewImageViewConstraints;
    long long _placeholderVisibilityRequestID;
    id /* block */ _visibilityChangeCompletionHandler;
}

@property (weak, nonatomic) id<PXVideoPlayerViewDelegate> delegate;
@property (retain, nonatomic) ISWrappedAVPlayer *player;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (copy, nonatomic) NSArray *placeholderImageFilters;
@property (nonatomic) double videoAppearanceCrossfadeDuration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } placeholderImageContentsRect;
@property (nonatomic) long long placeholderDisplayMode;
@property (readonly, nonatomic, getter=isDisplayingPlaceHolder) BOOL displayingPlaceholder;
@property (nonatomic) long long videoViewContentMode;
@property (nonatomic) BOOL allowsEdgeAntialiasing;

- (void)layoutSubviews;
- (id)generateSnapshotImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPlaceholderDisplayMode:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_updateContentMode;
- (void)_updateEdgeAntialiasing;
- (void)_updateSubviewsVisibility;
- (void)_updateVideoView;
- (void)_setDisplayingPlaceholder:(BOOL)a0 requestID:(long long)a1;
- (void)_runVisibilityChangeCompletionHandler;

@end
