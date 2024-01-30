@class UILabel, FAMugshotMarqueeView;

@interface FAFamilyHeaderView : UIView {
    FAMugshotMarqueeView *_mugShots;
}

@property (readonly, nonatomic) UILabel *familyHeaderLabel;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithFamilyCircle:(id)a0 profilePictureStore:(id)a1;

@end
