@class UIButton;
@protocol CSRemoteModalContentViewTouchDelegate;

@interface CSRemoteContentModalView : CSModalView

@property (weak, nonatomic) id<CSRemoteModalContentViewTouchDelegate> touchDelegate;
@property (retain, nonatomic) UIButton *backgroundDismissButton;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
