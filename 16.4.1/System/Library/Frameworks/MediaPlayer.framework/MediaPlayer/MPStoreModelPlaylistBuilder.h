@interface MPStoreModelPlaylistBuilder : MPStoreModelObjectBuilder {
    struct { unsigned char initialized : 1; unsigned char name : 1; unsigned char trackCount : 1; unsigned char editorNotes : 1; unsigned char shortEditorNotes : 1; unsigned char releaseDate : 1; unsigned char lastModifiedDate : 1; unsigned char artwork : 1; unsigned char editorialArtwork : 1; unsigned char tracksTiledArtwork : 1; unsigned char hasCleanContent : 1; unsigned char hasExplicitContent : 1; unsigned char type : 1; unsigned char libraryAdded : 1; unsigned char keepLocalEnableState : 1; unsigned char keepLocalManagedStatus : 1; unsigned char keepLocalManagedStatusReason : 1; unsigned char keepLocalConstraints : 1; unsigned char curatorPlaylist : 1; unsigned char owner : 1; unsigned char publicPlaylist : 1; unsigned char visiblePlaylist : 1; unsigned char subscribed : 1; unsigned char userEditableComponents : 1; unsigned char shareURL : 1; unsigned char shareShortURL : 1; unsigned char descriptionText : 1; unsigned char cloudVersionHash : 1; unsigned char traits : 1; unsigned char versionHash : 1; unsigned char isFavorite : 1; unsigned char dateFavorited : 1; struct { unsigned char identifiers : 1; unsigned char name : 1; unsigned char handle : 1; } curator; } _requestedPlaylistProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
