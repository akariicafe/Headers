@class CKAnimatedImage, NSArray, UIImageView, NSString, CKBalloonImageView;

@interface CKImageBalloonView : CKBalloonView <CKAnimationTimerObserver>

@property (copy, nonatomic) NSArray *frames;
@property (retain, nonatomic) UIImageView *irisBadgeView;
@property (nonatomic) unsigned long long animationFrameOffset;
@property (retain, nonatomic) CKAnimatedImage *animatedImage;
@property (retain, nonatomic) CKBalloonImageView *tailMask;
@property (retain, nonatomic) CKBalloonImageView *outlineMask;
@property (nonatomic) BOOL suppressMask;
@property (nonatomic) BOOL isIrisAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void)clearFilters;
- (void).cxx_destruct;
- (void)updateAnimationTimerObserving;
- (void)setHasTail:(BOOL)a0;
- (void)invisibleInkEffectViewWasSuspended;
- (void)invisibleInkEffectViewWasResumed;
- (id)imageForInvisibleInkEffectView;
- (BOOL)needsGroupOpacity;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (void)addFilter:(id)a0;
- (void)animationTimerFired:(unsigned long long)a0;
- (void)dealloc;
- (void)configureForComposition:(id)a0;
- (void)prepareForReuse;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (void)setCanUseOpaqueMask:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)overlayColor;
- (void)configureForTranscriptPlugin:(id)a0;
- (void)configureForMessagePart:(id)a0;

@end
