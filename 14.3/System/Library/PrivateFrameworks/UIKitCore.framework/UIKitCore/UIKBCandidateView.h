@class UIView;

@interface UIKBCandidateView : UIKBKeyView

@property (nonatomic) struct { unsigned char idiom : 6; unsigned char landscape : 1; unsigned char split : 1; unsigned char appearance : 8; unsigned char rendering : 8; unsigned char padding : 8; } visualStyling;
@property (retain, nonatomic) UIView *candidateKey;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isTenKey;
- (void)updateCandidateKey;
- (void)clearCandidateKey;
- (void)updateForKeyplane:(id)a0 key:(id)a1;
- (void)displayLayer:(id)a0;
- (id)candidateList;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;

@end
