@class UILabel, NSString;

@interface PSUIBadgeView : UIView

@property (retain, nonatomic) UILabel *badgeLabel;
@property (nonatomic) double fontSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double minPadding;
@property (nonatomic) double baseline;
@property (copy, nonatomic) NSString *text;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;

@end
