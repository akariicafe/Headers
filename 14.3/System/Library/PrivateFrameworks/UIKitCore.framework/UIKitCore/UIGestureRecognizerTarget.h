@interface UIGestureRecognizerTarget : NSObject

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;

- (void).cxx_destruct;
- (id)description;

@end
