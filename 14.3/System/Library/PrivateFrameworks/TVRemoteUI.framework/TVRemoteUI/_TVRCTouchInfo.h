@interface _TVRCTouchInfo : NSObject

@property (nonatomic) long long virtualPhase;
@property (nonatomic) BOOL pendingCancellation;
@property (nonatomic) struct CGPoint { double x; double y; } initialLocation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) struct CGPoint { double x; double y; } initialProportionalLocation;
@property (nonatomic) BOOL isLikelyLongListScrollingEdgeGesture;
@property (nonatomic) double timestamp;
@property (nonatomic) double previousTimestamp;

- (id)description;

@end
