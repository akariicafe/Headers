@class MPPropertySet, MPStoreModelStoreAssetBuilder;

@interface MPStoreModelTVShowBuilder : MPStoreModelObjectBuilder {
    MPStoreModelStoreAssetBuilder *_storeAssetBuilder;
    MPPropertySet *_storeAssetProperties;
    struct { unsigned char initialized : 1; unsigned char title : 1; unsigned char shortTitle : 1; unsigned char editorNotes : 1; unsigned char shortEditorNotes : 1; unsigned char editorialArtwork : 1; unsigned char artwork : 1; unsigned char episodeCount : 1; unsigned char tagline : 1; } _requestedTVShowProperties;
}

+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
