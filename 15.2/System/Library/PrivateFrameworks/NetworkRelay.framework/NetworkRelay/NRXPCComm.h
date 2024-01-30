@class NRDeviceIdentifier, NSMutableArray, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface NRXPCComm : NSObject {
    BOOL _sentCheckInMessage;
    BOOL _cancelled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_xpc_object> *_connection;
    id /* block */ _notificationBlock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    unsigned long long _identifier;
    NSMutableArray *_messagesToBeSent;
}

@property (retain, nonatomic) NRDeviceIdentifier *deviceIdentifier;

- (id)description;
- (void).cxx_destruct;
- (void)activate;
- (void)dealloc;
- (void)cancel;
- (id)initWithDeviceIdentifier:(id)a0 notificationQueue:(id)a1 notificationBlock:(id /* block */)a2;
- (void)sendXPCCommDictionary:(id)a0;

@end
