@class MKCircle;

@interface MKCircleView : MKOverlayPathView

@property (readonly, nonatomic) MKCircle *circle;

- (void)createPath;
- (id)initWithCircle:(id)a0;

@end
