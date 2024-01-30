@interface UIPointerRegionRequest : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) long long modifiers;

- (id)description;

@end
