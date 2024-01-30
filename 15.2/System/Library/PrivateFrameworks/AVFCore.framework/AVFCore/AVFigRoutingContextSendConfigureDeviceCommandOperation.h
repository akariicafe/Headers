@protocol AVOutputDeviceConfigurationRetrieval;

@interface AVFigRoutingContextSendConfigureDeviceCommandOperation : AVOperation {
    struct OpaqueFigRoutingContext { } *_routingContext;
    id /* block */ _configuratorBlock;
}

@property (retain, nonatomic) id<AVOutputDeviceConfigurationRetrieval> finalConfiguration;

+ (void)initialize;

- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 configuratorBlock:(id /* block */)a1;
- (BOOL)isAsynchronous;
- (void)start;
- (id)init;
- (void)dealloc;

@end
