@class NSString, NSArray, UIView;

@interface _CarTitleView : UIView

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL largeText;
@property (retain, nonatomic) NSArray *extraConstraints;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateText;
- (void)_updateLayout;
- (void).cxx_destruct;

@end
