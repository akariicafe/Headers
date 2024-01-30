@class NSArray, ASCVideoView, ASCTrailers, NSString, NSMutableArray, ASCScreenshots;

@interface ASCLockupMediaView : UIControl <ASCLockupMediaPresenterView>

@property (readonly, nonatomic) NSMutableArray *imageViews;
@property (retain, nonatomic) ASCVideoView *videoView;
@property (readonly, nonatomic) NSArray *mediaViews;
@property (nonatomic) unsigned long long numberOfViews;
@property (copy, nonatomic) ASCScreenshots *screenshots;
@property (copy, nonatomic) ASCTrailers *trailers;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredScreenshotSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)setImage:(id)a0 atIndex:(long long)a1 withDecoration:(id)a2;
- (id)makeLayout;
- (id)makeSizingLayout;
- (void)updateImageViews;

@end
