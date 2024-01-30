@class NSArray, NSString, INPerson, INSpeakableString;

@interface INSendMessageIntent : INIntent <INSendMessageIntentExport>

@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) long long outgoingMessageType;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) INSpeakableString *speakableGroupName;
@property (readonly, copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) INPerson *sender;
@property (readonly, copy, nonatomic) NSArray *attachments;
@property (nonatomic) long long effect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ignoredParameters;

- (id)verb;
- (void)setSender:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)initWithRecipients:(id)a0 outgoingMessageType:(long long)a1 content:(id)a2 speakableGroupName:(id)a3 conversationIdentifier:(id)a4 serviceName:(id)a5 sender:(id)a6;
- (void)setOutgoingMessageType:(long long)a0;
- (id)initWithRecipients:(id)a0 outgoingMessageType:(long long)a1 content:(id)a2 speakableGroupName:(id)a3 conversationIdentifier:(id)a4 serviceName:(id)a5 sender:(id)a6 attachments:(id)a7;
- (long long)_preferredInteractionDirection;
- (id)_redactedDictionaryRepresentation;
- (id)_keyCodableAttributes;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (void)setAttachments:(id)a0;
- (void)setRecipients:(id)a0;
- (id)groupName;
- (void)setServiceName:(id)a0;
- (void)setGroupName:(id)a0;
- (void)_intents_resolveOutgoingMessageTypeWithCompletionHandler:(id /* block */)a0;
- (id)initWithRecipients:(id)a0 content:(id)a1 groupName:(id)a2 serviceName:(id)a3 sender:(id)a4;
- (id)initWithRecipients:(id)a0 content:(id)a1 speakableGroupName:(id)a2 conversationIdentifier:(id)a3 serviceName:(id)a4 sender:(id)a5;
- (id)domain;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (void)setConversationIdentifier:(id)a0;
- (void)setSpeakableGroupName:(id)a0;
- (void)setVerb:(id)a0;
- (id)_spotlightContentType;
- (void)setContent:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)initWithRecipients:(id)a0 content:(id)a1 serviceName:(id)a2 sender:(id)a3;
- (BOOL)_isUserConfirmationRequired;
- (id)_validParameterCombinationsWithSchema:(id)a0;
- (id)_currentParameterCombination;
- (id)_dictionaryRepresentation;
- (BOOL)_isValidSubProducer:(id)a0;

@end
