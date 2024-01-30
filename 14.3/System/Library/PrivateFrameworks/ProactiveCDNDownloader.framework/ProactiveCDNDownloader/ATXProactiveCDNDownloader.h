@class NSObject;
@protocol OS_dispatch_queue, ATXGEOTileDataReaderProtocol, ATXGEOTileLoaderProtocol;

@interface ATXProactiveCDNDownloader : NSObject <ATXProactiveCDNDownloaderProtocol>

@property (readonly, nonatomic) id<ATXGEOTileLoaderProtocol> tileLoader;
@property (readonly, nonatomic) id<ATXGEOTileDataReaderProtocol> tileDataReader;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)heroAppPredictionsForLocation:(id)a0 completion:(id /* block */)a1;
- (id)initWithTileLoader:(id)a0 tileDataReader:(id)a1;
- (void)_heroAppPredictionsForLocation:(id)a0 completion:(id /* block */)a1;

@end
