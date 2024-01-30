@class NSString, INCallGroupConversationFilter, INCallGroupConversation;

@interface INJoinCallIntent : INIntent <INJoinCallIntentExport>

@property (readonly, copy, nonatomic) INCallGroupConversationFilter *groupConversationFilter;
@property (readonly, copy, nonatomic) INCallGroupConversation *groupConversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setVerb:(id)a0;
- (void)setGroupConversation:(id)a0;
- (void)setGroupConversationFilter:(id)a0;
- (id)initWithGroupConversationFilter:(id)a0 groupConversation:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;

@end
