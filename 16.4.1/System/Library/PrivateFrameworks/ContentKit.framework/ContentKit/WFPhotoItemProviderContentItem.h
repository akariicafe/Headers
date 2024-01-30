@class NSString, NSDictionary, WFFileType, WFObjectType;

@interface WFPhotoItemProviderContentItem : WFNSItemProviderContentItem <WFContentItemClass>

@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)itemWithItemProviderItem:(id)a0 photoMediaFileRepresentation:(id)a1 assetIdentifier:(id)a2;

- (id)defaultSourceForRepresentation:(id)a0;
- (id)outputTypes;

@end
