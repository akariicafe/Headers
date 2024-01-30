@interface MPStoreModelAlbumBuilder : MPStoreModelObjectBuilder {
    struct { unsigned char initialized : 1; unsigned char copyrightText : 1; unsigned char title : 1; unsigned char trackCount : 1; unsigned char maximumItemTrackNumber : 1; unsigned char discCount : 1; unsigned char hasCleanContent : 1; unsigned char hasExplicitContent : 1; unsigned char libraryAdded : 1; unsigned char keepLocalEnableState : 1; unsigned char keepLocalManagedStatus : 1; unsigned char keepLocalManagedStatusReason : 1; unsigned char keepLocalConstraints : 1; unsigned char libraryAddEligible : 1; unsigned char compilation : 1; unsigned char classical : 1; unsigned char releaseDate : 1; unsigned char artwork : 1; unsigned char year : 1; unsigned char preorder : 1; unsigned char editorNotes : 1; unsigned char shortEditorNotes : 1; unsigned char volumeNormalization : 1; unsigned char songPopularity : 1; unsigned char representativeSong : 1; unsigned char traits : 1; unsigned char versionHash : 1; unsigned char classicalExperienceAvailable : 1; unsigned char isFavorite : 1; unsigned char dateFavorited : 1; struct { unsigned char identifiers : 1; unsigned char name : 1; } artist; struct { unsigned char identifiers : 1; unsigned char name : 1; } genre; } _requestedAlbumProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
