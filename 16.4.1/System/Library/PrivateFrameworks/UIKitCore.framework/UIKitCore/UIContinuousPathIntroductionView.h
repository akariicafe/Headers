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

- (void)removeFromSuperview;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_introductionMovieAssetURL;
- (void)extraButtonTapAction;
- (id)initWithKeyboardAppearance:(long long)a0;
- (id)mediaContents;
- (double)mediaLayoutWidthAdjustment;
- (void)setupConstraintData;
- (id)textBodyDescriptions;
- (long long)textBodyMaxLines;
- (id)textTitleDescriptions;
- (void)updateVideoLayerWithNewVideo:(BOOL)a0;

@end
