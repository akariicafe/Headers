@class UILabel;

@interface UIDebuggingZoomLineView : UIView

@property (retain, nonatomic) UILabel *lineLabel;
@property (nonatomic) struct CGPoint { double x; double y; } start;
@property (nonatomic) struct CGPoint { double x; double y; } end;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLabelFrame;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
