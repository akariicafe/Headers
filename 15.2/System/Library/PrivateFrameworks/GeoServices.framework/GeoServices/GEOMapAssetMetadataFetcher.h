@class GEOMapAssetMetadata, GEOTileLoader, GEOApplicationAuditToken, geo_isolater, GEOTileKeyList;

@interface GEOMapAssetMetadataFetcher : NSObject {
    GEOApplicationAuditToken *_auditToken;
    GEOTileLoader *_tileLoader;
    BOOL _enableASTCTextures;
    geo_isolater *_isolation;
    GEOTileKeyList *_lastLoadedKeys;
    GEOMapAssetMetadata *_lastLoadedMetadata;
}

- (id)initWithTileLoader:(id)a0 auditToken:(id)a1 enableASTCTextures:(BOOL)a2;
- (void)fetchAssetMetadataForMetadataKeys:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
