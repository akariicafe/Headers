@class NSString, UILabel, NSArray;

@interface STSHeaderView : UICollectionReusableView {
    UILabel *_label;
    NSArray *_constraints;
}

@property (retain, nonatomic) NSString *title;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;

@end
