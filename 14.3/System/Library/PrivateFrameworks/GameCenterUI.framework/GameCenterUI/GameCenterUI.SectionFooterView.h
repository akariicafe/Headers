@class _TtC12GameCenterUI16DynamicTypeLabel;

@interface GameCenterUI.SectionFooterView : GameCenterUI.BaseCollectionReusableView {
    void /* unknown type, empty encoding */ footerLabel;
    void /* unknown type, empty encoding */ attachmentView;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ attachment;
    void /* unknown type, empty encoding */ labelTapAction;
    void /* unknown type, empty encoding */ attachmentTapAction;
    void /* unknown type, empty encoding */ separator;
}

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } layoutMargins;
@property (nonatomic, readonly) BOOL accessibilityLabelHasAction;
@property (nonatomic, readonly) BOOL accessibilityAttachmentHasAction;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityFooterLabel;

- (void).cxx_destruct;
- (void)handleTapWithGestureRecognizer:(id)a0;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
