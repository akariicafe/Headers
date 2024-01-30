@class NSURL, LPLinkMetadata;

@interface LPLinkMetadataStoreTransformer : NSObject {
    LPLinkMetadata *_metadata;
    NSURL *_URL;
}

- (void).cxx_destruct;
- (id)storeIdentifier;
- (id)initWithMetadata:(id)a0 URL:(id)a1;

@end
