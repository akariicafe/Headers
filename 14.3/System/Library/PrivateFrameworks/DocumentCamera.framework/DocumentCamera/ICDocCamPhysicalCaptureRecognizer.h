@class NSArray;

@interface ICDocCamPhysicalCaptureRecognizer : UIGestureRecognizer

@property (nonatomic) long long physicalButtonType;
@property (nonatomic) long long activeButton;
@property (copy, nonatomic) NSArray *desiredButtons;
@property (nonatomic, getter=isSuspended) BOOL suspended;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)_updateApplicationButtonStatus;
- (void)setEnabled:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (long long)_captureButtonForPhysicalButtonType:(long long)a0;

@end
