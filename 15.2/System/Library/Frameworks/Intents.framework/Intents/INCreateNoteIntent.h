@class INSpeakableString, INNoteContent, NSString;

@interface INCreateNoteIntent : INIntent <INCreateNoteIntentExport>

@property (readonly, copy, nonatomic) INSpeakableString *title;
@property (readonly, copy, nonatomic) INNoteContent *content;
@property (readonly, copy, nonatomic) INSpeakableString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setGroupName:(id)a0;
- (void)setVerb:(id)a0;
- (id)initWithTitle:(id)a0 content:(id)a1 groupName:(id)a2;
- (void)setContent:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)setTitle:(id)a0;

@end
