@class CKBalloonImageView, NSArray, UITapGestureRecognizer, UIImage, CKAnimatedImage, NSString, UILongPressGestureRecognizer;

@interface CKAssociatedStickerTranscriptCell : CKAssociatedMessageTranscriptCell <CKAnimationTimerObserver>

@property (retain, nonatomic) CKBalloonImageView *imageView;
@property (copy, nonatomic) NSArray *frames;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) CKAnimatedImage *animatedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)associatedStickerXOriginForStickerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parentSize:(struct CGSize { double x0; double x1; })a1 contentAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 orientation:(char)a3 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; float x2; float x3; float x4; float x5; float x6; })a4 outBalloonOffset:(double *)a5;

- (void)didMoveToWindow;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)animationTimerFired:(unsigned long long)a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)doubleTapGestureRecognized:(id)a0;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (void)longPressGestureRecognized:(id)a0;
- (void)performHide:(id /* block */)a0;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performReveal:(id /* block */)a0;
- (void)updateAnimationTimerObserving;

@end
