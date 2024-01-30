@class NSString, NSArray, INPerson, INSpeakableString;

@interface INSendMessageIntent : INIntent <UNNotificationContentProviding, INSendMessageIntentExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) long long outgoingMessageType;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) INSpeakableString *speakableGroupName;
@property (readonly, copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) INPerson *sender;
@property (readonly, copy, nonatomic) NSArray *attachments;
@property (nonatomic) long long effect;
@property (copy, nonatomic) NSString *notificationThreadIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ignoredParameters;

- (id)verb;
- (id)initWithRecipients:(id)a0 outgoingMessageType:(long long)a1 content:(id)a2 speakableGroupName:(id)a3 conversationIdentifier:(id)a4 serviceName:(id)a5 sender:(id)a6;
- (void)setSender:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithRecipients:(id)a0 outgoingMessageType:(long long)a1 content:(id)a2 speakableGroupName:(id)a3 conversationIdentifier:(id)a4 serviceName:(id)a5 sender:(id)a6 attachments:(id)a7;
- (id)_metadata;
- (long long)_preferredInteractionDirection;
- (id)_keyCodableAttributes;
- (void)setGroupName:(id)a0;
- (id)initWithRecipients:(id)a0 content:(id)a1 groupName:(id)a2 serviceName:(id)a3 sender:(id)a4;
- (id)initWithRecipients:(id)a0 content:(id)a1 speakableGroupName:(id)a2 conversationIdentifier:(id)a3 serviceName:(id)a4 sender:(id)a5;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (id)groupName;
- (void)setVerb:(id)a0;
- (void)setConversationIdentifier:(id)a0;
- (void)setAttachments:(id)a0;
- (void)setContent:(id)a0;
- (void)_setMetadata:(id)a0;
- (void)setServiceName:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setOutgoingMessageType:(long long)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (id)initWithRecipients:(id)a0 content:(id)a1 serviceName:(id)a2 sender:(id)a3;
- (void)setSpeakableGroupName:(id)a0;
- (BOOL)_isUserConfirmationRequired;
- (void)setDomain:(id)a0;
- (void)setRecipients:(id)a0;
- (id)_redactedDictionaryRepresentation;
- (BOOL)_isValidSubProducer:(id)a0;
- (id)_spotlightContentType;
- (id)_currentParameterCombination;
- (id)_validParameterCombinationsWithSchema:(id)a0;
- (void)_intents_resolveOutgoingMessageTypeWithCompletionHandler:(id /* block */)a0;

@end
