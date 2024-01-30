@class NSString, ABRequestHandler, NSObject;
@protocol OS_dispatch_queue;

@interface AuthBrokerAgentXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    ABRequestHandler *_requestHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
