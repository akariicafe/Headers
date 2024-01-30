@class NSArray;

@interface ARCoachingSpringDouble3 : NSObject {
    NSArray *_springs;
    double _response;
    double _dampingRatio;
}

@property (readonly, nonatomic) NSArray *springs;
@property (nonatomic) void /* unknown type, empty encoding */ value;
@property (nonatomic) void /* unknown type, empty encoding */ target;
@property (nonatomic) void /* unknown type, empty encoding */ velocity;
@property (nonatomic) void /* unknown type, empty encoding */ floatValue;
@property (nonatomic) double response;
@property (nonatomic) double dampingRatio;

- (id)init;
- (void).cxx_destruct;
- (void)stepWithDeltaTime:(double)a0;

@end
