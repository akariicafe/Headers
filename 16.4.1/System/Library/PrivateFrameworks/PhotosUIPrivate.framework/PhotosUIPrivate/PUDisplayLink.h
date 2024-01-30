@class CADisplayLink;

@interface PUDisplayLink : NSObject

@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) CADisplayLink *displayLink;

- (void)stop;
- (void)start;
- (void)_update:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpdateHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
