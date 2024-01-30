@class UITouch, UIImageView, UIView;

@interface HUDTouchInfo : NSObject

@property (nonatomic) struct { double unixTime; double price; unsigned long long volume; } stockValue;
@property (nonatomic) struct CGPoint { double x; double y; } plottedLocation;
@property (nonatomic) struct CGPoint { double x; double y; } locationInHUD;
@property (weak, nonatomic) UITouch *touch;
@property (retain, nonatomic) UIImageView *dot;
@property (retain, nonatomic) UIView *bar;

- (void).cxx_destruct;
- (id)description;

@end
