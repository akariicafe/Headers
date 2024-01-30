@protocol AXPIFingerModelDelegate;

@interface AXPIFingerModel : NSObject

@property (retain, nonatomic) id<AXPIFingerModelDelegate> delegate;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) double force;
@property (nonatomic) unsigned long long shape;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic, getter=isSelected) BOOL selected;

+ (id)fingerModelForLocation:(struct CGPoint { double x0; double x1; })a0;

- (void).cxx_destruct;
- (id)description;
- (void)setPressed:(BOOL)a0 sendDelegateCallback:(BOOL)a1;
- (void)updateWithPropertiesFromFingerModel:(id)a0;

@end
