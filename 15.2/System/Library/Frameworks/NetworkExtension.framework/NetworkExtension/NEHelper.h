@class NSDictionary, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface NEHelper : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, nonatomic) int classID;
@property (readonly, retain, nonatomic) NSDictionary *additionalProperties;
@property (copy) id /* block */ incomingMessageHandler;
@property (nonatomic) BOOL isSynchronous;

- (id)getConnection;
- (void)sendRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithDelegateClassID:(int)a0 queue:(id)a1 additionalProperties:(id)a2;
- (void)dealloc;
- (id)initWithDelegateClassID:(int)a0 queue:(id)a1;

@end
