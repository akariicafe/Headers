@interface UIEventSessionTouchEventDetail : NSObject

@property (nonatomic) long long upDownState;
@property (nonatomic) long long tapDragState;
@property (nonatomic) long long windowSection;
@property (nonatomic) double dragDistanceSquared;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;

- (id)init;

@end
