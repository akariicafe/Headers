@interface CEKAnimationGeneratorAnimation : NSObject

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) id /* block */ updateHandler;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithStartTime:(double)a0 duration:(double)a1 updateHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
