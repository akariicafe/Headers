@class ASCTrailers, ASCVideoView, NSArray, NSString, UIView, NSMutableArray, ASCScreenshots;

@interface ASCLockupMediaView : UIControl <ASCLockupMediaPresenterView>

@property (readonly, nonatomic) NSMutableArray *imageViews;
@property (readonly, nonatomic) UIView *containerView;
@property (retain, nonatomic) ASCVideoView *videoView;
@property (readonly, nonatomic) NSArray *mediaViews;
@property (copy, nonatomic) NSString *context;
@property (nonatomic, getter=isVideoLoopingEnabled) BOOL videoLoopingEnabled;
@property (nonatomic, getter=isVideoMuted) BOOL videoMuted;
@property (nonatomic) unsigned long long numberOfViews;
@property (copy, nonatomic) ASCScreenshots *screenshots;
@property (copy, nonatomic) ASCTrailers *trailers;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredScreenshotSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (id)makeLayout;
- (void)setImage:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })estimatedMediaContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMarginsForCurrentContext;
- (id)makeSizingLayout;
- (unsigned long long)numberOfImageViews;
- (void)setScreenshots:(id)a0 andTrailers:(id)a1;
- (void)updateImageViews;

@end
