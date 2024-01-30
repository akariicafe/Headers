@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_data;

@interface NWConcrete_nw_ws_ping_request : NSObject <OS_nw_ws_ping_request> {
    NSObject<OS_dispatch_data> *contents;
    NSObject<OS_dispatch_queue> *client_queue;
    id /* block */ pong_handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
