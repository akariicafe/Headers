@class NSArray, NSString, INDateComponentsRange;

@interface INSearchForMessagesIntent : INIntent <INSearchForMessagesIntentExport>

@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) long long recipientsOperator;
@property (readonly, copy, nonatomic) NSArray *senders;
@property (readonly, nonatomic) long long sendersOperator;
@property (readonly, copy, nonatomic) NSArray *searchTerms;
@property (readonly, nonatomic) long long searchTermsOperator;
@property (readonly, nonatomic) unsigned long long attributes;
@property (readonly, copy, nonatomic) INDateComponentsRange *dateTimeRange;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) long long identifiersOperator;
@property (readonly, copy, nonatomic) NSArray *notificationIdentifiers;
@property (readonly, nonatomic) long long notificationIdentifiersOperator;
@property (readonly, copy, nonatomic) NSArray *speakableGroupNames;
@property (readonly, nonatomic) long long speakableGroupNamesOperator;
@property (readonly, copy, nonatomic) NSArray *conversationIdentifiers;
@property (readonly, nonatomic) long long conversationIdentifiersOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)contents;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (void)setAttributes:(unsigned long long)a0;
- (void)setRecipients:(id)a0;
- (void)setIdentifiers:(id)a0;
- (void)setSearchTerms:(id)a0;
- (void)setContents:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)attributeSet;
- (id)contentPredicate;
- (long long)contentsOperator;
- (id)groupNames;
- (long long)groupNamesOperator;
- (id)initWithRecipients:(id)a0 senders:(id)a1 contents:(id)a2 attributes:(unsigned long long)a3 dateTimeRange:(id)a4 identifiers:(id)a5;
- (id)initWithRecipients:(id)a0 senders:(id)a1 contents:(id)a2 attributes:(unsigned long long)a3 dateTimeRange:(id)a4 identifiers:(id)a5 notificationIdentifiers:(id)a6;
- (id)initWithRecipients:(id)a0 senders:(id)a1 searchTerms:(id)a2 attributes:(unsigned long long)a3 dateTimeRange:(id)a4 identifiers:(id)a5 notificationIdentifiers:(id)a6 groupNames:(id)a7;
- (id)initWithRecipients:(id)a0 senders:(id)a1 searchTerms:(id)a2 attributes:(unsigned long long)a3 dateTimeRange:(id)a4 identifiers:(id)a5 notificationIdentifiers:(id)a6 speakableGroupNames:(id)a7;
- (id)initWithRecipients:(id)a0 senders:(id)a1 searchTerms:(id)a2 attributes:(unsigned long long)a3 dateTimeRange:(id)a4 identifiers:(id)a5 notificationIdentifiers:(id)a6 speakableGroupNames:(id)a7 conversationIdentifiers:(id)a8;
- (id)parametersByName;
- (void)setConversationIdentifiers:(id)a0;
- (void)setDateTimeRange:(id)a0;
- (void)setGroupNames:(id)a0;
- (void)setNotificationIdentifiers:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setSenders:(id)a0;
- (void)setSpeakableGroupNames:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
