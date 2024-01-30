@class NSDictionary, GEOMobileAssetResource;

@interface GEOGeographicMetadataMobileAssetFetcher : NSObject {
    unsigned long long _type;
    NSDictionary *_parameters;
    id /* block */ _responseBlock;
    GEOMobileAssetResource *_result;
}

- (id)initForType:(unsigned long long)a0 parameters:(id)a1;
- (void)fetchMetadataWithResponseQueue:(id)a0 block:(id /* block */)a1;
- (void)reportCorrupt:(id)a0;
- (void).cxx_destruct;

@end
