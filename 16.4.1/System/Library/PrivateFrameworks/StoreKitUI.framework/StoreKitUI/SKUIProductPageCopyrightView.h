@class NSString, SKUIColorScheme, UILabel;

@interface SKUIProductPageCopyrightView : UIView {
    UILabel *_copyrightLabel;
}

@property (retain, nonatomic) NSString *copyrightString;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
