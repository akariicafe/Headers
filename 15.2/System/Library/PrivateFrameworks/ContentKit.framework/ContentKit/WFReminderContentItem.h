@class REMReminder, REMStore;

@interface WFReminderContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) REMStore *reminderStore;
@property (readonly, nonatomic) REMReminder *reminder;

+ (id)typeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)stringConversionBehavior;
+ (id)allLists;
+ (id)defaultList;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)hasLibrary;
+ (id)itemWithReminder:(id)a0 fromReminderStore:(id)a1;
+ (id)contactRepresentationWithContact:(id)a0;

- (BOOL)hasAlarms;
- (BOOL)flagged;
- (void).cxx_destruct;
- (id)URL;
- (id)imageAttachments;
- (id)parentReminder;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (void)copyStateToItem:(id)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (id)changeTransaction;
- (BOOL)hasSubtasks;
- (id)subtasks;

@end
