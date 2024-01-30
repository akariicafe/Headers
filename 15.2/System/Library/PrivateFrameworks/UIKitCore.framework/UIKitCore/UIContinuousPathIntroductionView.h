@class UIView, AVPlayerLooper, NSArray, AVQueuePlayer, UIButton, NSLayoutConstraint, AVPlayerLayer, UILabel;

@interface UIContinuousPathIntroductionView : UIKBTutorialModalDisplay {
    struct CGSize { double width; double height; } _videoSize;
    double _textMargin;
    double _paddingAdjust;
    AVPlayerLooper *_playerLooper;
    AVQueuePlayer *_player;
}

@property (retain, nonatomic) UIView *textVideoContainer;
@property (retain, nonatomic) UILabel *landscapeTextBody;
@property (retain, nonatomic) UIView *keyboardView;
@property (retain, nonatomic) UIButton *landscapeButton;
@property (retain, nonatomic) NSArray *portraitConstraints;
@property (retain, nonatomic) NSArray *landscapeConstraints;
@property (retain, nonatomic) AVPlayerLayer *videoLayer;
@property (retain, nonatomic) NSLayoutConstraint *videoWidth;
@property (retain, nonatomic) NSLayoutConstraint *videoHeight;

- (id)mediaContents;
- (id)_introductionMovieAssetURL;
- (double)mediaLayoutWidthAdjustment;
- (void)updateVideoLayerWithNewVideo:(BOOL)a0;
- (long long)textBodyMaxLines;
- (id)textTitleDescriptions;
- (void)extraButtonTapAction;
- (id)textBodyDescriptions;
- (void).cxx_destruct;
- (id)initWithKeyboardAppearance:(long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setupConstraintData;
- (void)removeFromSuperview;

@end
