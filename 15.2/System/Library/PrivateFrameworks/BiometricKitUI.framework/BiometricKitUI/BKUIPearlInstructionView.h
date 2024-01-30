@class NSString, NSLayoutYAxisAnchor, UIScrollView, UILabel, NSLayoutConstraint;

@interface BKUIPearlInstructionView : UIView

@property (weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) UILabel *instructionLabel;
@property (weak, nonatomic) UILabel *detailLabel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } labelsHorizontalMargin;
@property (retain, nonatomic) NSLayoutConstraint *labelsWidthConstraint;
@property (retain, nonatomic) NSString *instruction;
@property (retain, nonatomic) NSString *detail;
@property (nonatomic) BOOL darkMode;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *instructionTextTopAnchor;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_configureConstraints;
- (void).cxx_destruct;
- (id)init;

@end
