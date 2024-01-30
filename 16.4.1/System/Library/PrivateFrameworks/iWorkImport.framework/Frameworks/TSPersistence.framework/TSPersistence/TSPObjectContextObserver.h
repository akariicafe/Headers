@interface TSPObjectContextObserver : NSObject

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)init;
- (void).cxx_destruct;

@end
