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
    struct IONotificationPort { } *_ioAccessoryConfigStreamClassNotify;
    unsigned int _ioAccessoryConfigStreamClassIteratorArrived;
    unsigned int _ioAccessoryConfigStreamClassIteratorTerminated;
    NSObject<OS_dispatch_queue> *_ioAccessoryListenerQueue;
}

@property (weak, nonatomic) id<ACCTransportIOAccessoryListenerProtocol> delegate;

- (void)stopListening;
- (void)startListening;
- (void)_ioAccessoryAuthCPAttached:(unsigned int)a0;
- (id)initWithDelegate:(id)a0;
- (void)_stopListeningForIOAccessoryConfigStreamClass;
- (void)_ioAccessoryConfigStreamAttached:(unsigned int)a0;
- (void)_ioAccessoryEAAttached:(unsigned int)a0;
- (void)_startListeningForIOAccessoryOOBPairingClass;
- (void)_stopListeningForIOAccessoryOOBPairingClass;
- (void)_ioAccessoryEATerminated:(unsigned int)a0;
- (void)_ioAccessoryPortTerminated:(unsigned int)a0;
- (void)_ioAccessoryPortAttached:(unsigned int)a0;
- (void)_startListeningForIOAccessoryPortClass;
- (void)_stopListeningForIOAccessoryEAClass;
- (void)_ioAccessoryManagerTerminated:(unsigned int)a0;
- (void)_startListeningForIOAccessoryConfigStreamClass;
- (void)_ioAccessoryOOBPairingAttached:(unsigned int)a0;
- (void).cxx_destruct;
- (void)_stopListeningForIOAccessoryManagerClass;
- (void)_ioAccessoryOOBPairingTerminated:(unsigned int)a0;
- (void)_startListeningForIOAccessoryManagerClass;
- (void)_ioAccessoryManagerAttached:(unsigned int)a0;
- (void)_ioAccessoryAuthCPTerminated:(unsigned int)a0;
- (void)dealloc;
- (void)_stopListeningForIOAccessoryPortClass;
- (void)_startListeningForIOAccessoryAuthCPClass;
- (void)_startListeningForIOAccessoryEAClass;
- (void)_ioAccessoryConfigStreamTerminated:(unsigned int)a0;
- (void)_stopListeningForIOAccessoryAuthCPClass;

@end
