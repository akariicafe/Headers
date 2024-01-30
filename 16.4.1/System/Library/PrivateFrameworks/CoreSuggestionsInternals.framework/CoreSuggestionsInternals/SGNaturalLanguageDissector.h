@class NSString, NSMutableDictionary;

@interface SGNaturalLanguageDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    NSMutableDictionary *_conversations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_personForCSPerson:(id)a0;
+ (id)ipsosMessageWithMailMessage:(id)a0 store:(id)a1;
+ (id)ipsosMessageWithTextMessage:(id)a0 store:(id)a1;
+ (BOOL)allowNaturalLanguageDissector;

- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)addEnrichmentForEvents:(id)a0 forMessage:(id)a1 toEntity:(id)a2;
- (id)initWithoutSharedInstance;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (BOOL)_shouldProcessMessage:(id)a0 entity:(id)a1;
- (void)_tagNaturalLanguageEnrichmentsForEntity:(id)a0;
- (id)init;
- (void)clearConversations;
- (void).cxx_destruct;
- (id)conversationWithIdentifier:(id)a0;

@end
