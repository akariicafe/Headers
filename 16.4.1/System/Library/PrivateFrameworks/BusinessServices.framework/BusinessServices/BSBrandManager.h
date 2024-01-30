@class BSBrandManagerObjcShim;

@interface BSBrandManager : NSObject {
    BSBrandManagerObjcShim *_shim;
}

- (void).cxx_destruct;
- (void)brandWithURI:(id)a0 completion:(id /* block */)a1;
- (id)initWithCachingEnabled:(BOOL)a0 cacheURL:(id)a1 brandDataSourceOpaqueWrapper:(id)a2;

@end
