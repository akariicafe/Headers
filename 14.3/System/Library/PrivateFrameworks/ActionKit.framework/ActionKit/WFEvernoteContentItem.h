@class ENNoteRef;

@interface WFEvernoteContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) ENNoteRef *noteRef;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (void)createNoteWithContent:(id)a0 completionHandler:(id /* block */)a1;
+ (id)itemWithNoteRef:(id)a0 note:(id)a1;

- (id)name;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentations:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (BOOL)includesFileRepresentationInSerializedItem;
- (id)preferredFileType;
- (BOOL)canEncodeWithCoder:(id)a0;

@end
