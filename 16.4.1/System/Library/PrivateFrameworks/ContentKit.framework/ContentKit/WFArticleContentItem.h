@class NSString, NSDictionary, WFFileType, WFArticle, WFObjectType;

@interface WFArticleContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFArticle *article;
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
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)URLCoercionHandler;
+ (id)dateCoercionHandler;
+ (id)fileWithHTML:(id)a0 named:(id)a1;
+ (id)htmlCoercionHandler;
+ (id)imageCoercionHandler;
+ (id)stringCoercionHandler;

- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (id)htmlRepresentation;

@end
