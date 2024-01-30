@class HMFActivity;
@protocol HAP2CoAPIOConsumer;

@interface HAP2CoAPIOThreadQueueEntry : NSObject {
    id<HAP2CoAPIOConsumer> _consumer;
    unsigned long long _operationType;
    id /* block */ _sessionBlock;
    double _timeout;
    HMFActivity *_activity;
}

- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end
