@class NSXPCConnection;

@interface CarbonComponentScannerXPCClient : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (id)xpcConnection;
- (void).cxx_destruct;
- (void)handleConnectionError:(BOOL)a0;
- (struct AudioComponentVector { struct shared_ptr<APComponent> *x0; struct shared_ptr<APComponent> *x1; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> *x0; } x2; BOOL x3; })initialScan:(id)a0;
- (void)rescan:(id)a0 added:(struct AudioComponentVector { struct shared_ptr<APComponent> *x0; struct shared_ptr<APComponent> *x1; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> *x0; } x2; BOOL x3; } *)a1 removed:(struct AudioComponentVector { struct shared_ptr<APComponent> *x0; struct shared_ptr<APComponent> *x1; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> *x0; } x2; BOOL x3; } *)a2;

@end
