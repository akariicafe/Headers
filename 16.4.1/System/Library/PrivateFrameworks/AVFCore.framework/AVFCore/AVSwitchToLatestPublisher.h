@class AVPublisher, AVNotificationSubscription;

@interface AVSwitchToLatestPublisher : AVPublisher {
    struct OpaqueFigReentrantMutex { } *_callbackMutex;
    AVPublisher *_upstream;
    AVNotificationSubscription *_outputPublisherSubscription;
    int _publisherIndex;
}

+ (id)switchToLatestPublisherWithUpstream:(id)a0;

- (id)subscribeRequestingInitialValue:(BOOL)a0 block:(id /* block */)a1;
- (id)initWithUpstream:(id)a0;
- (void)dealloc;
- (id)description;

@end
