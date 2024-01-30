@class NTKColoringLabel, REAccessoryDescription;

@interface NTKUpNextAccessoryView : UIView {
    REAccessoryDescription *_accessoryDescription;
    NTKColoringLabel *_label;
}

- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;
- (void)setTextColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithDescription:(id)a0;

@end
