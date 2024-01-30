@interface _UIKBHandwritingInputSpeedModelPoint : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) double timestamp;

- (id)description;

@end
