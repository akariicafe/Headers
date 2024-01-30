@class AVPlayerItem, AVPlayerLayer, CKMovieMediaObject, AVPlayer;
@protocol CKMovieBalloonViewDelegate;

@interface CKMovieBalloonView : CKImageBalloonView

@property (retain, nonatomic, setter=setAVPlayerItem:) AVPlayerItem *avPlayerItem;
@property (retain, nonatomic, setter=setAVPlayer:) AVPlayer *avPlayer;
@property (retain, nonatomic, setter=setAVPlayerLayer:) AVPlayerLayer *avPlayerLayer;
@property (retain, nonatomic) CKMovieMediaObject *mediaObject;
@property (weak, nonatomic) id<CKMovieBalloonViewDelegate> delegate;

- (void)prepareForDisplay;
- (void)layoutSubviews;
- (void)tapGestureRecognized:(id)a0;
- (id)description;
- (void)cleanupPlayerIfNeeded;
- (id)createAVAssetAndValidateCodec;
- (void).cxx_destruct;
- (void)videoDidReachEnd:(id)a0;
- (BOOL)isCodecTypeAllowed:(unsigned int)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (void)prepareForReuse;
- (void)dealloc;

@end
