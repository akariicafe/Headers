@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MKAppleMediaServices : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;
+ (id)sourceStringWithSource:(long long)a0;

- (void).cxx_destruct;
- (id)init;
- (void)appleMediaServicesResultsWithIdentifiers:(id)a0 source:(long long)a1 completion:(id /* block */)a2;
- (void)appleMediaServicesResultsWithIdentifiers:(id)a0 artworkSize:(struct CGSize { double x0; double x1; })a1 screenScale:(double)a2 type:(long long)a3 source:(long long)a4 completion:(id /* block */)a5;
- (void)appleMediaServicesResultsWithIdentifiers:(id)a0 bundleIdentifiers:(id)a1 artworkSize:(struct CGSize { double x0; double x1; })a2 screenScale:(double)a3 type:(long long)a4 source:(long long)a5 completion:(id /* block */)a6;
- (void)openConnectionIfNeeded;
- (void)appleMediaServicesResultsWithBundleIdentifiers:(id)a0 artworkSize:(struct CGSize { double x0; double x1; })a1 screenScale:(double)a2 source:(long long)a3 completion:(id /* block */)a4;
- (void)mediaResultWithIdentifiers:(id)a0 bundleIdentifiers:(id)a1 artworkSize:(struct CGSize { double x0; double x1; })a2 screenScale:(double)a3 type:(long long)a4 source:(long long)a5 completion:(id /* block */)a6;
- (void)appleMediaServicesResultsWithBundleIdentifiers:(id)a0 source:(long long)a1 completion:(id /* block */)a2;

@end
