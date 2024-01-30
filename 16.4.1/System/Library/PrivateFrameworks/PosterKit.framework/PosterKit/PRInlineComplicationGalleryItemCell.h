@class UIView, NSString, UIImage, UIImageView, UICellAccessory, UIViewController, NSLayoutConstraint, UILabel;

@interface PRInlineComplicationGalleryItemCell : UICollectionViewListCell {
    UIView *_widgetContainerView;
    UIImageView *_iconImageView;
    UILabel *_label;
    UICellAccessory *_checkmarkAccessory;
    NSLayoutConstraint *_leadingConstraint;
}

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic, getter=isSeparatorVisible) BOOL separatorVisible;
@property (nonatomic) BOOL showsCheckmark;

+ (double)suggestionInset;
+ (double)checkmarkInset;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
