@class UILabel, UIButton;
@protocol PKEditTableNoPassesViewDelegate;

@interface PKEditTableNoPassesView : UIView {
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_buttonScanCode;
    UIButton *_buttonFindApps;
}

@property (weak, nonatomic) id<PKEditTableNoPassesViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)scanCodeButtonTapped;
- (void)findAppsForWalletTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
