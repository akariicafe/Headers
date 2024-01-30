@class NSString, UIImageView, UIImage, MPMoviePlayerController;
@protocol SKUIEmbeddedMediaViewDelegate;

@interface SKUIEmbeddedMediaView : UIControl {
    MPMoviePlayerController *_moviePlayer;
    UIImageView *_playerDecorationView;
    UIImageView *_thumbnailReflectionView;
    UIImageView *_thumbnailView;
    BOOL _usingInlinePlayback;
}

@property (weak, nonatomic) id<SKUIEmbeddedMediaViewDelegate> delegate;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSString *mediaURLString;
@property (readonly, nonatomic) long long playbackState;
@property (nonatomic) BOOL showsThumbnailReflection;
@property (nonatomic) long long thumbnailContentMode;
@property (retain, nonatomic) UIImage *thumbnailImage;

- (void)didMoveToWindow;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_thumbnailView;
- (void)_tearDownMoviePlayer;
- (void)_didExitFullscreen:(id)a0;
- (void)_didFinishPlayback:(id)a0;
- (id)_newMoviePlayerControllerWithURL:(id)a0;
- (void)_playbackStateChanged:(id)a0;
- (void)_sendPlaybackStateChanged;
- (struct CGSize { double x0; double x1; })_sizeToFitImageSize:(struct CGSize { double x0; double x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)beginInlinePlaybackWithURL:(id)a0;
- (void)beginPlaybackAnimated:(BOOL)a0;
- (void)endPlaybackAnimated:(BOOL)a0;

@end
