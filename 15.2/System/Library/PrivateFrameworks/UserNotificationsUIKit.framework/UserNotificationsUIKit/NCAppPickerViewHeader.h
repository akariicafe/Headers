@class UILabel, UIImageView, UIView;

@interface NCAppPickerViewHeader : UICollectionReusableView {
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_orderingDescriptionLabel;
    UIView *_orderingWarningContainer;
    UILabel *_orderingWarningLabel;
    UIImageView *_orderingWarningIconImageView;
}

+ (id)_descriptionFont;
+ (id)_titleFont;
+ (id)_titleText;
+ (id)_descriptionText;
+ (id)reuseIdentifier;
+ (id)_orderingDescriptionText;
+ (id)_orderingDescriptionFont;
+ (id)_orderingWarningFont;
+ (id)_orderingWarningText;
+ (double)preferredHeightForWidth:(double)a0 supportsSortByAvgNumberOfNotifications:(BOOL)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)configureSupportsSortByAvgNumberOfNotifications:(BOOL)a0;

@end
