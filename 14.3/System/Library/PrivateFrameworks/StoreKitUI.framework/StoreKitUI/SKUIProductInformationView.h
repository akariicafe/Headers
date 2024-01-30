@class SKUIColorScheme, NSArray, NSString, UIView, NSMutableArray, UILabel;

@interface SKUIProductInformationView : UIView {
    NSMutableArray *_imageValues;
    NSMutableArray *_keyLabels;
    UIView *_separatorView;
    UILabel *_titleLabel;
    NSMutableArray *_valueLabels;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (retain, nonatomic) NSArray *informationLines;
@property (nonatomic) BOOL hidesSeparatorView;
@property (retain, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_keyWidth;

@end
