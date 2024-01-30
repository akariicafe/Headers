@class NSString, NSDictionary, REMStore, REMReminder, WFFileType, WFObjectType;

@interface WFReminderContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) REMStore *reminderStore;
@property (readonly, nonatomic) REMReminder *reminder;
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
+ (id)allLists;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)defaultList;
+ (BOOL)hasLibrary;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (void)runQuery:(id)a0 withItems:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
+ (id)stringConversionBehavior;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)contactRepresentationWithContact:(id)a0;
+ (id)itemWithReminder:(id)a0 fromReminderStore:(id)a1;

- (id)URL;
- (id)imageAttachments;
- (void).cxx_destruct;
- (BOOL)hasAlarms;
- (BOOL)flagged;
- (id)parentReminder;
- (BOOL)getListAltText:(id /* block */)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)changeTransaction;
- (void)copyStateToItem:(id)a0;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)hasSubtasks;
- (id)subtasks;

@end
