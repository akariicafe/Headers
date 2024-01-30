@class NSString, CLPlacemark, INSpeakableString, INDateComponentsRange;

@interface INSearchForNotebookItemsIntent : INIntent <INSearchForNotebookItemsIntentExport>

@property (readonly, copy, nonatomic) INSpeakableString *title;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) CLPlacemark *location;
@property (readonly, nonatomic) long long locationSearchType;
@property (readonly, copy, nonatomic) INDateComponentsRange *dateTime;
@property (readonly, nonatomic) long long dateSearchType;
@property (readonly, nonatomic) unsigned long long temporalEventTriggerTypes;
@property (readonly, nonatomic) long long taskPriority;
@property (readonly, copy, nonatomic) NSString *notebookItemIdentifier;
@property (copy, nonatomic) INSpeakableString *groupName;
@property (nonatomic) BOOL includeAllNoteContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)initWithTitle:(id)a0 content:(id)a1 itemType:(long long)a2 status:(long long)a3 location:(id)a4 locationSearchType:(long long)a5 dateTime:(id)a6 dateSearchType:(long long)a7 notebookItemIdentifier:(id)a8;
- (id)initWithTitle:(id)a0 content:(id)a1 itemType:(long long)a2 status:(long long)a3 location:(id)a4 locationSearchType:(long long)a5 dateTime:(id)a6 dateSearchType:(long long)a7 temporalEventTriggerTypes:(unsigned long long)a8 taskPriority:(long long)a9 notebookItemIdentifier:(id)a10;
- (id)initWithTitle:(id)a0 content:(id)a1 itemType:(long long)a2 status:(long long)a3 location:(id)a4 locationSearchType:(long long)a5 dateTime:(id)a6 dateSearchType:(long long)a7;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (void)setStatus:(long long)a0;
- (id)domain;
- (void)setTitle:(id)a0;
- (void)setVerb:(id)a0;
- (void)setItemType:(long long)a0;
- (void)setLocation:(id)a0;
- (void)setDateTime:(id)a0;
- (void)setLocationSearchType:(long long)a0;
- (void)setDateSearchType:(long long)a0;
- (void)setTemporalEventTriggerTypes:(unsigned long long)a0;
- (void)setTaskPriority:(long long)a0;
- (void)setNotebookItemIdentifier:(id)a0;
- (void)setContent:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
