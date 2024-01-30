@class REMReminder, REMStore;

@interface WFReminderContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) REMStore *reminderStore;
@property (readonly, nonatomic) REMReminder *reminder;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)defaultSourceForRepresentation:(id)a0;
+ (id)allLists;
+ (id)defaultList;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)hasLibrary;
+ (id)itemWithReminder:(id)a0 fromReminderStore:(id)a1;
+ (id)contactRepresentationWithContact:(id)a0;

- (id)URL;
- (BOOL)hasAlarms;
- (void).cxx_destruct;
- (id)parentReminder;
- (BOOL)flagged;
- (id)imageAttachments;
- (BOOL)getListAltText:(id /* block */)a0;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)changeTransaction;
- (id)copyWithName:(id)a0 zone:(struct _NSZone { } *)a1;
- (BOOL)hasSubtasks;
- (id)subtasks;

@end
