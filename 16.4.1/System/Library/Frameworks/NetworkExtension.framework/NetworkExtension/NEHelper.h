@class NSDictionary, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface NEHelper : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _classID;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSDictionary *_additionalProperties;
}

@property (copy) id /* block */ incomingMessageHandler;
@property (nonatomic) BOOL isSynchronous;

- (void)sendRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)dealloc;
- (id)initWithDelegateClassID:(int)a0 queue:(id)a1;
- (id)initWithDelegateClassID:(int)a0 queue:(id)a1 additionalProperties:(id)a2;
- (void).cxx_destruct;

@end
