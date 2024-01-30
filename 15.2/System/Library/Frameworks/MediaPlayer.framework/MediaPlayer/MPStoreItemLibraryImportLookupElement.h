@class NSDictionary, ICStorePlatformMetadata;

@interface MPStoreItemLibraryImportLookupElement : MPStoreItemLibraryImportElement {
    ICStorePlatformMetadata *_storeItem;
}

@property (readonly, nonatomic) NSDictionary *lookupDictionary;

- (id)storeItem;
- (id)initWithLookupDictionary:(id)a0 additionalTrackMetadata:(id)a1;
- (void).cxx_destruct;

@end
