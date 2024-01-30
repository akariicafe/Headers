@interface _UIFocusFastScrollingTouchSequence : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } startLocation;
@property (nonatomic) struct CGPoint { double x; double y; } previousLocation;
@property (nonatomic) struct CGPoint { double x; double y; } endLocation;
@property (nonatomic) double peakSpeed;
@property (nonatomic) struct CGVector { double dx; double dy; } axisLockedDistanceAccumulator;
@property (nonatomic) BOOL didReceiveSpatialFocusUpdate;
@property (nonatomic) BOOL didReceiveProgrammaticFocusUpdate;

@end
