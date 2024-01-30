@class WFDataDetectorResults, NSString, NSDictionary, WFFileType, WFObjectType;

@interface WFStringContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) WFDataDetectorResults *dataDetectorResults;
@property (readonly, nonatomic) NSString *string;
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
+ (id)coercions;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3 cachingIdentifier:(id)a4;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)dictionaryCoercionHandler;
+ (id)pdfCoercionHandler;
+ (id)printFormatterCoercionHandler;
+ (id)stringCoercionHandler;
+ (id)textFileCoercionHandler;

- (void).cxx_destruct;
- (BOOL)isContent;

@end
