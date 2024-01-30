@class NSLayoutConstraint;

@interface TPSMultilineButton : UIButton {
    NSLayoutConstraint *_labelWidthConstraint;
    NSLayoutConstraint *_labelTopConstraint;
    NSLayoutConstraint *_labelBottomConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *fm_workaround_height_constraint;
@property (nonatomic) BOOL needToInvalidateTitleLableIntrinsicContentSize;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
