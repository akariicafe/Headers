@class NSString;

@interface OBAnimationState : NSObject

@property (retain, nonatomic) NSString *darkName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) double transitionDuration;
@property (nonatomic) double transitionSpeed;

- (void).cxx_destruct;
- (id)stateForLayer:(id)a0;
- (id)initWithStateName:(id)a0 transitionDuration:(double)a1 transitionSpeed:(double)a2;
- (id)initWithStateName:(id)a0 darkStateName:(id)a1 transitionDuration:(double)a2 transitionSpeed:(double)a3;

@end
