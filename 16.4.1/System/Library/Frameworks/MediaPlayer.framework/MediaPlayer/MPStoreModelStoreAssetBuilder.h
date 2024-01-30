@interface MPStoreModelStoreAssetBuilder : MPStoreModelObjectBuilder {
    struct { unsigned char initialized : 1; unsigned char endpointType : 1; unsigned char redownloadParameters : 1; unsigned char redownloadable : 1; unsigned char accountIdentifier : 1; unsigned char shouldReportPlayEvents : 1; unsigned char subscriptionRequired : 1; } _requestedStoreAssetProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
