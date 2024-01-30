@protocol AVOutputDeviceConfigurationRetrieval;

@interface AVFigRoutingContextSendConfigureDeviceCommandOperation : AVOperation {
    struct OpaqueFigRoutingContext { } *_routingContext;
    id /* block */ _configuratorBlock;
}

@property (retain, nonatomic) id<AVOutputDeviceConfigurationRetrieval> finalConfiguration;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (BOOL)isAsynchronous;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 configuratorBlock:(id /* block */)a1;
- (void)start;

@end
