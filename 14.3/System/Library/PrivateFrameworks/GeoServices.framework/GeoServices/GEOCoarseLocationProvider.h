@class GEOLocationShifter, NSObject;
@protocol OS_dispatch_queue;

@interface GEOCoarseLocationProvider : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _inFlightTileLoadsCount;
    GEOLocationShifter *_locationShifter;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_snapNonMercatorCoordinateIfNecessary:(id)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;
- (void)_fetchBasicCoarseEquivalentForLocation:(id)a0 fallbackIsPermanent:(BOOL)a1 callbackQueue:(id)a2 callback:(id /* block */)a3;
- (void)_fetchRepresentativePointFromData:(id)a0 location:(id)a1 callbackQueue:(id)a2 callback:(id /* block */)a3;
- (void)fetchCoarseEquivalentForLocation:(id)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;

@end
