@class BSBrandManagerObjcShim;

@interface BSBrandManager : NSObject {
    BSBrandManagerObjcShim *_shim;
}

- (void)brandWithURI:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithCachingEnabled:(BOOL)a0 cacheURL:(id)a1 brandDataSourceOpaqueWrapper:(id)a2;

@end
