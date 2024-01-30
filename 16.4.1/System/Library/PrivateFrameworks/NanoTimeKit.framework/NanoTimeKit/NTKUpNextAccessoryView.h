@class CLKUIColoringLabel, REAccessoryDescription;

@interface NTKUpNextAccessoryView : UIView {
    REAccessoryDescription *_accessoryDescription;
    CLKUIColoringLabel *_label;
}

- (void)setTextColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;
- (void)configureWithDescription:(id)a0;

@end
