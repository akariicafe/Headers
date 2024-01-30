@interface HUControllableCollectionViewLayoutOverrideAttributes : NSObject

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) long long zIndex;
@property (nonatomic) double alpha;

- (id)init;

@end
