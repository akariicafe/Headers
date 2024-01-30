@class CKTypingView, CALayer;
@protocol IMTypingIndicatorLayerProtocol;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell <CKLayerDelegate>

@property (retain, nonatomic) CKTypingView *typingView;
@property (retain, nonatomic) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer;

- (void)setTraitCollection:(id)a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;
- (void).cxx_destruct;
- (void)ckLayerDidBecomeVisible:(BOOL)a0;
- (void)dealloc;
- (void)performInsertion:(id /* block */)a0;
- (void)prepareForReuse;
- (void)performRemoval:(id /* block */)a0;
- (void)startPulseAnimation;
- (void)stopPulseAnimation;
- (void)startShrinkAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startGrowAnimation;
- (void)setOrientation:(char)a0;

@end
