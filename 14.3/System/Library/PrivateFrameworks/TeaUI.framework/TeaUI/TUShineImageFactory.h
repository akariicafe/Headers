@interface TUShineImageFactory : NSObject {
    void /* unknown type, empty encoding */ lruCache;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ inflightRequests;
}

@property (class, nonatomic, readonly) TUShineImageFactory *shared;

- (id)init;
- (void).cxx_destruct;
- (id)syncShineImageForRequest:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)shineImageForRequest:(id)a0 completion:(id /* block */)a1;

@end
