@class NSDictionary, GEOMobileAssetResource;

@interface GEOGeographicMetadataMobileAssetFetcher : NSObject {
    unsigned long long _type;
    NSDictionary *_parameters;
    id /* block */ _responseBlock;
    GEOMobileAssetResource *_result;
}

- (void).cxx_destruct;
- (void)fetchMetadataWithResponseQueue:(id)a0 block:(id /* block */)a1;
- (id)initForType:(unsigned long long)a0 parameters:(id)a1;

@end
