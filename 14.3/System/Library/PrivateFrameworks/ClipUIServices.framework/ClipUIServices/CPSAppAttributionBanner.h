@class CPSLabelWithPlaceholder, NSString, UIImage, CPSHighlightForwardingButton, UIImageView, ISImageDescriptor, PLPlatterView, CPSAppStoreButton, UILabel;

@interface CPSAppAttributionBanner : UIView {
    UIImageView *_iconView;
    UILabel *_supertitleLabel;
    CPSLabelWithPlaceholder *_titleLabel;
    CPSLabelWithPlaceholder *_subtitleLabel;
    CPSAppStoreButton *_appStoreButton;
    CPSHighlightForwardingButton *_overlayButton;
    PLPlatterView *_platterView;
}

@property (class, readonly, nonatomic) ISImageDescriptor *preferredImageDescriptor;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *supertitle;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) BOOL showsAppStoreButton;
@property (copy, nonatomic) id /* block */ tapAction;

- (id)init;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleTap:(id)a0;

@end
