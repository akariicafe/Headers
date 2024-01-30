@class NSArray;

@interface GEOMapAssetMetadata : NSObject {
    NSArray *_tiles;
    BOOL _enableASTCTextures;
}

- (id)initWithVectorTiles:(id)a0 enableASTCTextures:(BOOL)a1;
- (id)keysForMetroAvailability:(BOOL)a0;
- (void).cxx_destruct;

@end
