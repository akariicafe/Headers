@class NSArray;

@interface MPStoreItemImportTrackData : ML3StoreItemTrackData

@property (readonly, nonatomic) NSArray *importElements;

+ (id)_importPropertiesDictFromImportMetadataDict:(id)a0;

- (void).cxx_destruct;
- (id)_associatedElementForPropertyDict:(id)a0;
- (id)initWithImportElements:(id)a0;
- (id)parsedStoreItemsImportProperties;

@end
