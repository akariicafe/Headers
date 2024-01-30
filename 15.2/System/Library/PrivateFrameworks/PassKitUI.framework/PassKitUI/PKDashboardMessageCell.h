@class NSString, UIImageView, UIImage, UILabel, UIButton;

@interface PKDashboardMessageCell : UITableViewCell {
    UIImageView *_iconImageView;
    UIButton *_dismissButton;
    BOOL _isTemplateLayout;
}

@property (nonatomic) BOOL smallDevice;
@property (readonly, nonatomic) UILabel *labelTitle;
@property (readonly, nonatomic) UILabel *labelMessage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *dismissImage;
@property (copy, nonatomic) id /* block */ actionOnDismiss;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissButtonPressed:(id)a0;

@end
