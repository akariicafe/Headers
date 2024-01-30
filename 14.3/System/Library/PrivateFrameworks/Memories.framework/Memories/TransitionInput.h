@class KonaClip;

@interface TransitionInput : NSObject

@property (nonatomic) int ID;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) struct CGSize { double width; double height; } naturalSize;
@property (nonatomic) KonaClip *clip;

- (id)description;

@end
