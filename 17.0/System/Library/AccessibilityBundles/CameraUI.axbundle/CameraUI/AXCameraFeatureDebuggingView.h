@class UIColor, NSString, UILabel, UIView;

@interface AXCameraFeatureDebuggingView : UIView

@property (readonly, nonatomic) UIView *_crossHairX;
@property (readonly, nonatomic) UIView *_crossHairY;
@property (readonly, nonatomic) UILabel *_label;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL textOnTop;
@property (nonatomic) BOOL textInsideBox;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) BOOL didReuse;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
