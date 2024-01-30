@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _LSDClient : NSObject <NSXPCConnectionDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, retain) NSXPCConnection *XPCConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
- (id)initWithXPCConnection:(id)a0;
- (void)willHandleInvocation:(id)a0 isReply:(BOOL)a1;
- (void)didHandleInvocation:(id)a0 isReply:(BOOL)a1;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1;

@end
