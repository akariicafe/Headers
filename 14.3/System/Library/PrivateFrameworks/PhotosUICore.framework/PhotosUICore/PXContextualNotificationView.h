@class UIImageView, UILabel, AVAsset, PXImageRequester, PXVideoPlayerView, NSLayoutConstraint, NSString, AVPlayerItem, PXContextualNotification, AVVideoComposition, UIView, PXContextualNotificationChevronView, NSArray, PXCapsuleButton, UIImage;

@interface PXContextualNotificationView : UIView <PXChangeObserver>

@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIImageView *titleIconView;
@property (readonly, nonatomic) UILabel *messageLabel;
@property (readonly, nonatomic) UIImageView *dismissIconView;
@property (readonly, nonatomic) PXVideoPlayerView *mediaView;
@property (readonly, nonatomic) NSLayoutConstraint *mediaViewHeightConstraint;
@property (nonatomic, setter=_setMediaAspectRatio:) double _mediaAspectRatio;
@property (retain, nonatomic, setter=_setLoopingPlayerItem:) AVPlayerItem *_loopingPlayerItem;
@property (retain, nonatomic) PXCapsuleButton *actionButton;
@property (retain, nonatomic) PXContextualNotificationChevronView *chevronView;
@property (copy, nonatomic) NSArray *constraints;
@property (readonly, nonatomic) long long style;
@property (weak, nonatomic) PXContextualNotification *contextualNotification;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *titleIcon;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) AVAsset *loopingVideoAsset;
@property (copy, nonatomic) AVVideoComposition *loopingVideoComposition;
@property (nonatomic) BOOL useRegularHitTesting;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleActionButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)_updateMessageLabelForCMMCard;
- (void)setPlaceholderImage:(id)a0 imageRequester:(id)a1;
- (void)_updateLoopingPlayerItem;
- (void)_handleDidSetVideoAudioSession;
- (void)_startLoopingWithItem:(id)a0;
- (BOOL)isPointInsideDismissArea:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPointInsidePassthroughArea:(struct CGPoint { double x0; double x1; })a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)updateConstraints;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_preferredContentSizeChanged:(id)a0;

@end
