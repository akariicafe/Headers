@class NSArray;

@interface GEOMapAssetMetadata : NSObject {
    NSArray *_tiles;
    BOOL _enableASTCTextures;
}

- (void).cxx_destruct;
- (id)initWithVectorTiles:(id)a0 enableASTCTextures:(BOOL)a1;
- (id)keysForMetroAvailability:(BOOL)a0;

@end
