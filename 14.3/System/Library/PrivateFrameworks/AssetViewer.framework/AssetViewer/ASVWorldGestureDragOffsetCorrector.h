@interface ASVWorldGestureDragOffsetCorrector : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ initialDragOffset;
@property (nonatomic) void /* unknown type, empty encoding */ thresholdDragOffset;
@property (nonatomic) double startTime;

- (id)initWithInitialDragOffset:(id)a0 thresholdDragOffset:(SEL)a1;
- (void /* unknown type, empty encoding */)currentDragOffset;

@end
