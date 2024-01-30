@class NSArray, NSString;
@protocol IMAssistantMessageHandlerDataSource;

@interface IMAssistantMessageHandler : NSObject <IMAssistantINMessageConverterPersonProvider, IMAssistantIdentifiableIntentHandler>

@property (retain, nonatomic) id<IMAssistantMessageHandlerDataSource> messageHandlerDataSource;
@property (retain, nonatomic) NSArray *keysToFetch;
@property (copy, nonatomic) NSString *intentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectToIMDaemonController;

- (id)meContactIdentifier;
- (void).cxx_destruct;
- (id)contactWithIdentifier:(id)a0;
- (id)_initWithDataSource:(id)a0 contactKeysToFetch:(id)a1 intentIdentifier:(id)a2;
- (id)contactIdentifiersForParticipantsInChat:(id)a0;
- (id)contactIdentifiersMatchingHandle:(id)a0;
- (id)contactIdentifiersMatchingHandleID:(id)a0;
- (id)contactIdentifiersMatchingINPersonHandle:(id)a0;
- (id)contactIdentifiersMatchingSPIHandle:(id)a0;
- (id)contactsMatchingINPerson:(id)a0;
- (id)contactsMatchingPredicate:(id)a0 forPerson:(id)a1;
- (void)forceTriggerResumeNotification;
- (id)initWithDataSource:(id)a0 intentIdentifier:(id)a1;
- (id)initWithDataSource:(id)a0 keysToFetch:(id)a1 intentIdentifier:(id)a2;
- (id)initWithIntentIdentifier:(id)a0;
- (id)personFromSPIHandle:(id)a0;
- (id)unifiedContactIdentifierForContactIdentifier:(id)a0;

@end
