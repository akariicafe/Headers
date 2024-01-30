@interface AXPIFingerEventTouchInfo : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } normalizedLocation;
@property (nonatomic) double force;

@end
