@class FMFMapCache, NSXPCConnection;

@interface FMFMapSession : NSObject

@property (retain, nonatomic) FMFMapCache *mapCache;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedInstance;
+ (id)newConnection;

- (void).cxx_destruct;
- (void)mapImageForRequest:(id)a0 andCompletion:(id /* block */)a1;
- (void)gridImageForScreenRatio:(double)a0 andCompletion:(id /* block */)a1;
- (void)noLocationImageForScreenRatio:(double)a0 andCompletion:(id /* block */)a1;
- (void)mapImageForLocation:(id)a0 altitude:(double)a1 pitch:(double)a2 screenRatio:(double)a3 andCompletion:(id /* block */)a4;
- (void)gridImageForWidth:(double)a0 height:(double)a1 cache:(BOOL)a2 andCompletion:(id /* block */)a3;
- (void)noLocationImageForWidth:(double)a0 height:(double)a1 cache:(BOOL)a2 andCompletion:(id /* block */)a3;
- (void)mapImageForLocation:(id)a0 altitude:(double)a1 pitch:(double)a2 width:(double)a3 height:(double)a4 cache:(BOOL)a5 andCompletion:(id /* block */)a6;

@end
