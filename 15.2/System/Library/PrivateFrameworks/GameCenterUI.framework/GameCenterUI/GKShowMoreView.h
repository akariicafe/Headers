@class GKLabel, UICollectionView, UIActivityIndicatorView, NSLayoutConstraint;

@interface GKShowMoreView : UICollectionReusableView

@property (retain, nonatomic) GKLabel *label;
@property (nonatomic) long long sectionIndex;
@property (retain, nonatomic) NSLayoutConstraint *horizontalContraint;
@property (retain, nonatomic) NSLayoutConstraint *verticalContraint;
@property (nonatomic) BOOL showShowAll;
@property (nonatomic) long long numberToShow;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) SEL showMoreAction;
@property (nonatomic) BOOL loading;
@property (nonatomic) double textAlignmentOffset;

+ (BOOL)requiresConstraintBasedLayout;

- (void)updateLabel;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)a0;
- (id)baseTextStyle;

@end
