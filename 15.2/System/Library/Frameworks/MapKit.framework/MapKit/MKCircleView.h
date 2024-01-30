@class MKCircle;

@interface MKCircleView : MKOverlayPathView

@property (readonly, nonatomic) MKCircle *circle;

- (id)initWithCircle:(id)a0;
- (void)createPath;

@end
