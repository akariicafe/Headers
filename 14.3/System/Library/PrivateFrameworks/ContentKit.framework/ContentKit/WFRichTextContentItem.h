@interface WFRichTextContentItem : WFGenericFileContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (BOOL)typeRequiresMainThread:(id)a0;
+ (id)attributedStringFromHTMLFile:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
+ (id)attributesDictionaryForType:(id)a0;
+ (id)documentTypeForType:(id)a0;
+ (id)htmlHeader;
+ (id)htmlFooter;
+ (id)normalizedHTMLDocumentFromHTML:(id)a0;
+ (id)normalizedHTMLDocumentFromHTMLData:(id)a0;

- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentations:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)getFileRepresentationsForSerialization:(id /* block */)a0;
- (id)preferredFileType;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (BOOL)isContent;
- (void)generateRTFDRepresentation:(id /* block */)a0 fromAttributedString:(id)a1 forType:(id)a2;
- (void)generateDataRepresentation:(id /* block */)a0 fromAttributedString:(id)a1 forType:(id)a2;
- (void)generateAttributedString:(id /* block */)a0 fromFile:(id)a1 forClass:(Class)a2;

@end
