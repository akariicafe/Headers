@interface MPStoreModelRecordLabelBuilder : MPStoreModelObjectBuilder {
    struct { unsigned char initialized : 1; unsigned char name : 1; unsigned char descriptionText : 1; unsigned char shortDescriptionText : 1; unsigned char artwork : 1; unsigned char editorialArtwork : 1; } _requestedRecordLabelProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
