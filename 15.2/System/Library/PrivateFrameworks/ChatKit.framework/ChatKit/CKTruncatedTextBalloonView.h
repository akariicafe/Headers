@class UIImageView, NSString;

@interface CKTruncatedTextBalloonView : CKHyperlinkBalloonView <NSLayoutManagerDelegate>

@property (retain, nonatomic) UIImageView *chevron;
@property (nonatomic) BOOL avoidTextLineBreaks;
@property (nonatomic) BOOL wantsChevron;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)configureForMessagePart:(id)a0;

@end
