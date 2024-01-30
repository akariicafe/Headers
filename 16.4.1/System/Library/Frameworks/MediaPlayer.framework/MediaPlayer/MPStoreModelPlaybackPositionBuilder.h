@interface MPStoreModelPlaybackPositionBuilder : MPStoreModelObjectBuilder {
    struct { unsigned char initialized : 1; unsigned char bookmarkTime : 1; unsigned char shouldRememberBookmarkTime : 1; unsigned char hasBeenPlayed : 1; unsigned char startTime : 1; unsigned char stopTime : 1; unsigned char storeUbiquitousIdentifier : 1; unsigned char userPlayCount : 1; } _requestedPlaybackPositionProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
