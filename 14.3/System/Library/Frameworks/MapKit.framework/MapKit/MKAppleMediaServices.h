@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MKAppleMediaServices : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)openConnectionIfNeeded;
- (void)appStoreAppWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)appStoreAppWithIdentifiers:(id)a0 artworkSize:(struct CGSize { double x0; double x1; })a1 screenScale:(double)a2 type:(long long)a3 completion:(id /* block */)a4;
- (void)appStoreAppWithIdentifiers:(id)a0 bundleIdentifiers:(id)a1 artworkSize:(struct CGSize { double x0; double x1; })a2 screenScale:(double)a3 type:(long long)a4 completion:(id /* block */)a5;
- (void)appStoreAppWithBundleIdentifiers:(id)a0 artworkSize:(struct CGSize { double x0; double x1; })a1 screenScale:(double)a2 completion:(id /* block */)a3;
- (void)mediaResultWithIdentifiers:(id)a0 bundleIdentifiers:(id)a1 artworkSize:(struct CGSize { double x0; double x1; })a2 screenScale:(double)a3 type:(long long)a4 completion:(id /* block */)a5;
- (void)appStoreAppWithBundleIdentifiers:(id)a0 completion:(id /* block */)a1;

@end
