@class NSString, GEOLocation, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GEOGeographicMetadataTileFetcher : NSObject <GEOGeographicMetadataFetcher> {
    NSObject<OS_dispatch_queue> *_workQueue;
    int _tileStyle;
    unsigned short _mcc;
    unsigned short _mnc;
    GEOLocation *_location;
    unsigned long long _options;
    NSArray *_tileDatas;
    NSDictionary *_resultURLs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchMetadataWithResponseQueue:(id)a0 block:(id /* block */)a1;
- (void)reportCorrupt:(id)a0;
- (void).cxx_destruct;
- (id)initForTileStyle:(int)a0 location:(id)a1 options:(unsigned long long)a2;
- (id)initForTileStyle:(int)a0 mcc:(unsigned short)a1 mnc:(unsigned short)a2 location:(id)a3 options:(unsigned long long)a4;

@end
