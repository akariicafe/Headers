@interface MPStoreModelArtistBuilder : MPStoreModelObjectBuilder {
    struct { unsigned char initialized : 1; unsigned char name : 1; unsigned char hasBiography : 1; unsigned char hasSocialPosts : 1; unsigned char artwork : 1; unsigned char editorialArtwork : 1; unsigned char classicalExperienceAvailable : 1; unsigned char isFavorite : 1; unsigned char dateFavorited : 1; struct { unsigned char identifiers : 1; unsigned char name : 1; } genre; } _requestedArtistProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
