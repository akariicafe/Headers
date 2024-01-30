@class NSDictionary;

@interface WFRemoteContentItem : WFGenericFileContentItem

@property (copy, nonatomic) NSDictionary *serializedItem;

+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3 cachingIdentifier:(id)a4;

- (void).cxx_destruct;
- (id)name;
- (id)metadataForSerialization;
- (id)preferredFileType;
- (id)initWithSerializedItem:(id)a0 named:(id)a1 attributionSet:(id)a2 cachingIdentifier:(id)a3;

@end
