@class NSString;
@protocol NRNSXPCListenerDelegate;

@interface NRNSXPCListener : NSXPCListener <NSXPCListenerDelegate, NRNSXPCListenerProtocol> {
    id<NRNSXPCListenerDelegate> _listenerDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<NRNSXPCListenerDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
