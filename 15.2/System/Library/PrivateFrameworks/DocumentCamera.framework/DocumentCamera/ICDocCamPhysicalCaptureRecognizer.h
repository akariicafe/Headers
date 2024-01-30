@class NSArray;

@interface ICDocCamPhysicalCaptureRecognizer : UIGestureRecognizer

@property (nonatomic) long long physicalButtonType;
@property (nonatomic) long long activeButton;
@property (copy, nonatomic) NSArray *desiredButtons;
@property (nonatomic, getter=isSuspended) BOOL suspended;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setEnabled:(BOOL)a0;
- (void)_updateApplicationButtonStatus;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (long long)_captureButtonForPhysicalButtonType:(long long)a0;

@end
