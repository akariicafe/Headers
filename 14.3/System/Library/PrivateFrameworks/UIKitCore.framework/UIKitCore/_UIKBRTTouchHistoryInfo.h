@interface _UIKBRTTouchHistoryInfo : NSObject

@property (retain, nonatomic) id touchIdentifier;
@property (nonatomic) double touchTime;
@property (nonatomic) struct CGPoint { double x; double y; } actualLocation;
@property (nonatomic) BOOL isLeftHand;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL ignoreForDrift;
@property (nonatomic) BOOL ignoreTouch;
@property (nonatomic) struct CGPoint { double x; double y; } errorVector;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
