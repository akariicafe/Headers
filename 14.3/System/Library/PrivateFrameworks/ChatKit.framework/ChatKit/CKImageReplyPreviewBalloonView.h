@interface CKImageReplyPreviewBalloonView : CKImageBalloonView

- (void)prepareForDisplay;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)configureForMessagePart:(id)a0;

@end
