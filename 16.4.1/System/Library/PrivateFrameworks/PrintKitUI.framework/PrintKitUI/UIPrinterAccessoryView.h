@class UIButton, UIView;
@protocol UIPrinterAccessoryViewDelegate;

@interface UIPrinterAccessoryView : UIView

@property (retain, nonatomic) UIButton *infoButton;
@property (retain, nonatomic) UIView *statusView;
@property (weak, nonatomic) id<UIPrinterAccessoryViewDelegate> delegate;
@property (nonatomic) int printerState;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)infoButtonPressed:(id)a0;

@end
