@class UIMenu, NSString, NSArray, UIView, UILabel, UIButton;

@interface SFStartPageSectionHeaderTitleView : UIView {
    UIButton *_button;
    NSArray *_currentConstraints;
    UIView *_currentConstraintsSubview;
    UILabel *_label;
    BOOL _usesLargeTitle;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIMenu *menu;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)setModel:(id)a0;
- (void)buttonShapesEnabledStatusDidChange:(id)a0;

@end
