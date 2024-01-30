@class UIColor, NSString, UIView, UILabel;

@interface SKUIGallerySwooshCollectionViewCell : UICollectionViewCell {
    UIColor *_titleColor;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIView *contentChildView;
@property (copy, nonatomic) NSString *title;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setColoringWithColorScheme:(id)a0;

@end
