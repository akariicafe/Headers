@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, MCMResultPromise;

@interface MCMReply : NSObject <MCMReply_Internal, MCMReply> {
    BOOL _replySent;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcReply;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *slowWorkloop;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fastWorkloop;
@property (readonly, nonatomic) id<MCMResultPromise> resultPromise;
@property (nonatomic) BOOL exitAfterSend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)send;
- (void)dispatchSyncToFastWorkloopWithBlock:(id /* block */)a0;
- (void)encodeResult:(id)a0;
- (void)handoffToSlowWorkloopforClientIdentity:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithXpcReply:(id)a0 slowWorkloop:(id)a1 fastWorkloop:(id)a2 resultPromise:(id)a3;
- (void)invalidate;
- (void)_send;
- (void).cxx_destruct;

@end
