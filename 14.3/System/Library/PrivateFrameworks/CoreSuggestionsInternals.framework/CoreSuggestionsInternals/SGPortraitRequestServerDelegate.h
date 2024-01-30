@class NSString, _PASLock;

@interface SGPortraitRequestServerDelegate : NSObject <NSXPCListenerDelegate> {
    id /* block */ _makeHandler;
    _PASLock *_handlerCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithMakeHandler:(id /* block */)a0;

@end
