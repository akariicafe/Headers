@class VUIErrorLayout, VUILabel;

@interface VUIErrorView : UIView

@property (retain, nonatomic) VUIErrorLayout *layout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *descriptionLabel;
@property (retain, nonatomic) VUILabel *debugTextLabel;
@property (retain, nonatomic) VUILabel *debugTextLabel2;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
