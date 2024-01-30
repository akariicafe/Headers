@class NSArray;

@interface ARCoachingQuaternionSpring : NSObject {
    NSArray *_springs;
    double _response;
    double _dampingRatio;
}

@property (readonly, nonatomic) NSArray *springs;
@property (nonatomic) struct { } value;
@property (nonatomic) struct { } target;
@property (nonatomic) struct { } velocity;
@property (nonatomic) double response;
@property (nonatomic) double dampingRatio;

- (id)init;
- (void).cxx_destruct;
- (void)stepWithDeltaTime:(double)a0;

@end
