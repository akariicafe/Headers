@interface CKTextReplyPreviewBalloonView : CKTextBalloonView

@property (nonatomic) BOOL shouldUseFilledBalloonStyle;
@property (nonatomic) BOOL isFromMe;

- (BOOL)hasBackground;
- (void)clearFilters;
- (void)addFilter:(id)a0;
- (void)prepareForReuse;
- (id)description;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 isSingleLine:(BOOL *)a2;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })targetTextContainerInsets;
- (void)configureForMessagePart:(id)a0;

@end
