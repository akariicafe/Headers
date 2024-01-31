@protocol VKWalkAssistHapticEngineDelegate;

@interface VKWalkAssistHeadingManager : NSObject

@property (nonatomic) double heading;
@property (nonatomic) double bearing;
@property (nonatomic) BOOL isLocationInView;
@property (readonly, weak, nonatomic) id<VKWalkAssistHapticEngineDelegate> hapticEngineDelegate;
@property (readonly, nonatomic, getter=isFacingStartLocation) BOOL facingStartLocation;

- (void).cxx_destruct;
- (double)_getDegrees:(double)a0;
- (BOOL)_isFacingLocation;
- (id)initWithHapticEngineDelegate:(id)a0;
- (void)updateHeading:(double)a0 bearing:(double)a1;

@end
