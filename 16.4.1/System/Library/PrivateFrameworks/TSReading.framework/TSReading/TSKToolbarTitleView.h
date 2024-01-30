@class NSString, UIColor;

@interface TSKToolbarTitleView : UIView

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;

- (void)dealloc;

@end
