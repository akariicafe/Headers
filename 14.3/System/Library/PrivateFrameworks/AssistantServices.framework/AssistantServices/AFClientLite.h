@class AFCallSiteInfo;

@interface AFClientLite : NSObject {
    AFCallSiteInfo *_initiationCallSiteInfo;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleCommand:(id)a0 afterCurrentRequest:(BOOL)a1 isOneWay:(BOOL)a2 commandHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)handleCommand:(id)a0 afterCurrentRequest:(BOOL)a1 commandHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)handleOneWayCommand:(id)a0 commandHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)handleCommand:(id)a0 commandHandler:(id /* block */)a1 completion:(id /* block */)a2;

@end
