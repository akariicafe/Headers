@interface ASVWorldGestureDragOffsetCorrector : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ initialDragOffset;
@property (nonatomic) void /* unknown type, empty encoding */ thresholdDragOffset;
@property (nonatomic) double startTime;

- (void /* unknown type, empty encoding */)currentDragOffset;
- (id)initWithInitialDragOffset:(id)a0 thresholdDragOffset:(SEL)a1;

@end
