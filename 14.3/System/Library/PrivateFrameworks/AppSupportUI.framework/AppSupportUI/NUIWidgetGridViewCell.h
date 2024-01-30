@class NSString, UIImageView, NUIWidgetGridView, UILabel;

@interface NUIWidgetGridViewCell : NUIContainerStackView <NUIContainerViewDelegate, NUIWidgetGridViewCell> {
    double _width;
    struct CGSize { double width; double height; } _measuredSize;
    unsigned long long _index;
    BOOL _donatableSpaceIsValid;
    BOOL _accessibilityEnabled;
    struct { double leading; double trailing; } _donatableSpace;
}

@property (readonly, weak, nonatomic) NUIWidgetGridView *gridView;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long index;

- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (void)_didTapButton;
- (struct { double x0; double x1; })donatableSpaceAllowRemeasure:(BOOL)a0;
- (id)initWithWidgetGridView:(id)a0 item:(id)a1 index:(unsigned long long)a2;
- (struct { double x0; double x1; })donatableSpace;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
