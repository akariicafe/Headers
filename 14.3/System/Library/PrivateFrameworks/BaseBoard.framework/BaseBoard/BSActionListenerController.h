@class BSActionListener, NSObject;
@protocol OS_dispatch_queue;

@interface BSActionListenerController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _transactionCount;
    BSActionListener *_listener;
    unsigned int _listenerCount;
    unsigned int _listenerTearDownToken;
}

- (id)init;
- (void)dealloc;

@end
