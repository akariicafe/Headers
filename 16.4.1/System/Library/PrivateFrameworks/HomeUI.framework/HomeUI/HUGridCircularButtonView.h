@class UIListContentView, NSString, UIImage, UIButton;
@protocol HUGridCircularButtonViewDelegate;

@interface HUGridCircularButtonView : UIView

@property (retain, nonatomic) UIListContentView *label;
@property (retain, nonatomic) UIButton *button;
@property (readonly, nonatomic) UIImage *buttonImage;
@property (readonly, nonatomic) NSString *title;
@property (nonatomic) id<HUGridCircularButtonViewDelegate> delegate;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 title:(id)a1;

@end
