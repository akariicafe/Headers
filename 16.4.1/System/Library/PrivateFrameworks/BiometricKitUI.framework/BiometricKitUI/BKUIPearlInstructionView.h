@class NSString, NSLayoutYAxisAnchor, UILabel, NSLayoutConstraint;

@interface BKUIPearlInstructionView : UIView

@property (weak, nonatomic) UILabel *instructionLabel;
@property (weak, nonatomic) UILabel *detailLabel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } labelsHorizontalMargin;
@property (retain, nonatomic) NSLayoutConstraint *labelsWidthConstraint;
@property (retain, nonatomic) NSString *instruction;
@property (retain, nonatomic) NSString *detail;
@property (nonatomic) BOOL darkMode;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *instructionTextTopAnchor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)init;
- (void)_configureConstraints;
- (void).cxx_destruct;

@end
