@interface UIPointerRegionRequest : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) long long modifiers;
@property (nonatomic) long long _requestingDriverType;

- (id)description;
- (BOOL)_isPencilInitiated;

@end
