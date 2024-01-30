@class CADisplayLink;

@interface PUDisplayLink : NSObject

@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) CADisplayLink *displayLink;

- (id)initWithUpdateHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)stop;
- (void)_update:(id)a0;
- (void)start;

@end
