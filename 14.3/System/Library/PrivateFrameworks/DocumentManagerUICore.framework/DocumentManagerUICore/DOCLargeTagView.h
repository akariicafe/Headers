@class DOCTagDotView, UILabel, DOCTagCheckmarkView, DOCTag;

@interface DOCLargeTagView : UIView

@property (readonly, nonatomic) DOCTagDotView *tagDotView;
@property (readonly, nonatomic) UILabel *tagNameLabel;
@property (readonly, nonatomic) DOCTagCheckmarkView *checkmarkView;
@property (retain, nonatomic) DOCTag *tagValue;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateBackgroundColor;
- (void)updateBorder;

@end
