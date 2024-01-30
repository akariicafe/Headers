@class UIView;

@interface SKUIProductPagePlaceholderScrollView : UIScrollView

@property (nonatomic) BOOL isPad;
@property (retain, nonatomic) UIView *placeholderView;
@property (nonatomic) double offset;

- (void)layoutSubviews;
- (void).cxx_destruct;

@end
