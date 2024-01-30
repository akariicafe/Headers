@class WFArticle;

@interface WFArticleContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFArticle *article;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)stringConversionBehavior;
+ (id)attributedStringWithHTML:(id)a0 named:(id)a1;
+ (id)fileWithHTML:(id)a0 named:(id)a1;
+ (BOOL)supportedTypesMustBeDeterminedByInstance;

- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;

@end
