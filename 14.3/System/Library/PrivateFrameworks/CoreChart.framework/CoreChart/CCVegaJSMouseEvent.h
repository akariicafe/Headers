@interface CCVegaJSMouseEvent : NSObject <CCVegaJSMouseEventInterface>

@property (nonatomic) double clientX;
@property (nonatomic) double clientY;
@property (nonatomic) double movementX;
@property (nonatomic) double movementY;
@property (nonatomic) BOOL propagationStopped;
@property (nonatomic) BOOL defaultPrevented;
@property (nonatomic) BOOL isConsumed;

- (void)stopPropagation;
- (void)preventDefault;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 movement:(struct CGPoint { double x0; double x1; })a1;

@end
