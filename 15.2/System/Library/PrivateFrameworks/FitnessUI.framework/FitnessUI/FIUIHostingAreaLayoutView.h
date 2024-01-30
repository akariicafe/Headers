@class UIView;

@interface FIUIHostingAreaLayoutView : UIView

@property (retain, nonatomic) UIView *hostedView;

+ (id)viewHostingView:(id)a0;
+ (id)blackBackgroundViewHostingView:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)translatesAutoresizingMaskIntoConstraints;
- (void).cxx_destruct;

@end
