@class HMFActivity;
@protocol HAP2CoAPIOConsumer;

@interface HAP2CoAPIOThreadQueueEntry : NSObject {
    BOOL _shouldRegister;
    BOOL _shouldUnregister;
    id<HAP2CoAPIOConsumer> _consumer;
    id /* block */ _sessionBlock;
    HMFActivity *_activity;
}

- (void).cxx_destruct;

@end
