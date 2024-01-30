@class NSObject;
@protocol OS_dispatch_queue, ACCTransportIOAccessoryListenerProtocol;

@interface ACCTransportIOAccessoryListener : NSObject {
    struct IONotificationPort { } *_ioAccessoryManagerClassNotify;
    unsigned int _ioAccessoryManagerClassIteratorArrived;
    unsigned int _ioAccessoryManagerClassIteratorTerminated;
    struct IONotificationPort { } *_ioAccessoryPortClassNotify;
    unsigned int _ioAccessoryPortClassIteratorArrived;
    unsigned int _ioAccessoryPortClassIteratorTerminated;
    struct IONotificationPort { } *_ioAccessoryAuthCPClassNotify;
    unsigned int _ioAccessoryAuthCPClassIteratorArrived;
    unsigned int _ioAccessoryAuthCPClassIteratorTerminated;
    struct IONotificationPort { } *_ioAccessoryEAClassNotify;
    unsigned int _ioAccessoryEAClassIteratorArrived;
    unsigned int _ioAccessoryEAClassIteratorTerminated;
    struct IONotificationPort { } *_ioAccessoryOOBPairingClassNotify;
    unsigned int _ioAccessoryOOBPairingClassIteratorArrived;
    unsigned int _ioAccessoryOOBPairingClassIteratorTerminated;
    NSObject<OS_dispatch_queue> *_ioAccessoryListenerQueue;
}

@property (weak, nonatomic) id<ACCTransportIOAccessoryListenerProtocol> delegate;

- (void)stopListening;
- (void)_ioAccessoryManagerTerminated:(unsigned int)a0;
- (void)_startListeningForIOAccessoryAuthCPClass;
- (void).cxx_destruct;
- (void)_stopListeningForIOAccessoryManagerClass;
- (void)_startListeningForIOAccessoryOOBPairingClass;
- (void)_startListeningForIOAccessoryPortClass;
- (void)dealloc;
- (void)_ioAccessoryManagerAttached:(unsigned int)a0;
- (void)_ioAccessoryPortAttached:(unsigned int)a0;
- (void)_ioAccessoryAuthCPAttached:(unsigned int)a0;
- (void)_ioAccessoryOOBPairingTerminated:(unsigned int)a0;
- (void)_ioAccessoryPortTerminated:(unsigned int)a0;
- (void)_startListeningForIOAccessoryManagerClass;
- (void)_ioAccessoryEAAttached:(unsigned int)a0;
- (void)startListening;
- (void)_ioAccessoryEATerminated:(unsigned int)a0;
- (void)_ioAccessoryAuthCPTerminated:(unsigned int)a0;
- (void)_stopListeningForIOAccessoryOOBPairingClass;
- (id)initWithDelegate:(id)a0;
- (void)_stopListeningForIOAccessoryEAClass;
- (void)_startListeningForIOAccessoryEAClass;
- (void)_stopListeningForIOAccessoryAuthCPClass;
- (void)_stopListeningForIOAccessoryPortClass;
- (void)_ioAccessoryOOBPairingAttached:(unsigned int)a0;

@end
