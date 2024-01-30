@class NSString, INNote, INNoteContent;

@interface INAppendToNoteIntent : INIntent <INAppendToNoteIntentExport>

@property (readonly, copy, nonatomic) INNote *targetNote;
@property (readonly, copy, nonatomic) INNoteContent *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setVerb:(id)a0;
- (id)initWithTargetNote:(id)a0 content:(id)a1;
- (void)setContent:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setTargetNote:(id)a0;
- (void)setDomain:(id)a0;

@end
