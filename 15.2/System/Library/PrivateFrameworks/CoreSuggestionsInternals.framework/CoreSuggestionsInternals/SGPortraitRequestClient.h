@class _PASXPCClientHelper;

@interface SGPortraitRequestClient : NSObject {
    _PASXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)extractionsFromSearchableItems:(id)a0 error:(id *)a1;
- (id)extractionsFromUserAction:(id)a0 searchableItem:(id)a1 error:(id *)a2;

@end
