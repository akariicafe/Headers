@class NSString, GEOLocation, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface GEOGeographicMetadataTileFetcher : NSObject <GEOGeographicMetadataFetcher> {
    NSObject<OS_dispatch_queue> *_workQueue;
    int _tileStyle;
    GEOLocation *_location;
    unsigned long long _options;
    NSArray *_tileDatas;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initForTileStyle:(int)a0 location:(id)a1 options:(unsigned long long)a2;
- (void)fetchMetadataWithResponseQueue:(id)a0 block:(id /* block */)a1;

@end
