@class NSString, INCallGroupConversationFilter, INCallGroupConversation;

@interface INJoinCallIntent : INIntent <INJoinCallIntentExport>

@property (readonly, copy, nonatomic) INCallGroupConversationFilter *groupConversationFilter;
@property (readonly, copy, nonatomic) INCallGroupConversation *groupConversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithGroupConversationFilter:(id)a0 groupConversation:(id)a1;
- (id)parametersByName;
- (void)setGroupConversation:(id)a0;
- (void)setGroupConversationFilter:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
