@interface MPStoreModelMovieMediaClipBuilder : MPStoreModelObjectBuilder {
    struct { unsigned char initialized : 1; unsigned char title : 1; unsigned char previewArtwork : 1; struct { unsigned char identifiers : 1; unsigned char duration : 1; unsigned char flavorType : 1; unsigned char mediaType : 1; unsigned char url : 1; } staticAssets; } _requestedClipProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;
- (id)mediaClipWithStoreItemMetadata:(id)a0 storeItemMovieClip:(id)a1;

@end
