@interface BodyPoint : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) float score;

- (void)dealloc;
- (id)init;

@end
