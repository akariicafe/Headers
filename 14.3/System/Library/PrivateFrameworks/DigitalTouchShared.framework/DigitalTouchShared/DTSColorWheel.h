@class UIButton, UIView;
@protocol DTSColorWheelDelegate;

@interface DTSColorWheel : UIView

@property (weak, nonatomic) id<DTSColorWheelDelegate> delegate;
@property (nonatomic) double colorWheelRadius;
@property (nonatomic) double gradientWidth;
@property (nonatomic) double pickerDiameter;
@property (nonatomic) double hueRotation;
@property (nonatomic) double pickerRotation;
@property (retain, nonatomic) UIView *pickerCircle;
@property (retain, nonatomic) UIButton *doneButton;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)doneButtonTapped:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)beganTouches:(id)a0;
- (void)finishedTouches;
- (void)updatePickerPositionForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)pickerViewHighlightedColor;
- (void)createDoneButtonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
