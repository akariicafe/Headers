@interface _NCManagerHandlerWrapper : NSObject

@property (nonatomic) double updateInterval;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) id /* block */ calibratedHandler;

+ (id)wrapperWithUpdateInterval:(double)a0 handler:(id /* block */)a1 calibratedHandler:(id /* block */)a2;

- (void).cxx_destruct;

@end
