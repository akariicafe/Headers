@class INNote;

@interface WFNoteContentItem : WFContentItem

@property (readonly, nonatomic) INNote *note;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)defaultSourceForRepresentation:(id)a0;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)hasLibrary;

- (id)body;
- (id)modificationDate;
- (id)creationDate;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)fullText;

@end
