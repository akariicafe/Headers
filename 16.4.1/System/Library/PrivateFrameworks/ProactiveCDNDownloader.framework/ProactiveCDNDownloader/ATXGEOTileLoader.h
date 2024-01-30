@class NSObject;
@protocol OS_dispatch_queue;

@interface ATXGEOTileLoader : NSObject <ATXGEOTileLoaderProtocol> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void)requestGEOTileDataForLocation:(id)a0 tileLoader:(id)a1 tileDataHandler:(id /* block */)a2;
- (id)tileKeyListForLocation:(id)a0;
- (id)init;
- (void)requestGEOTileDataForLocation:(id)a0 tileDataHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
