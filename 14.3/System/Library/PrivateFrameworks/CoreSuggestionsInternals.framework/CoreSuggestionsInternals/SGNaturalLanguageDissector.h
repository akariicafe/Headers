@class NSString, NSMutableDictionary;

@interface SGNaturalLanguageDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    NSMutableDictionary *_conversations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ipsosMessageWithMailMessage:(id)a0 store:(id)a1;
+ (id)_personForCSPerson:(id)a0;
+ (BOOL)allowNaturalLanguageDissector;
+ (id)ipsosMessageWithTextMessage:(id)a0 store:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)clearConversations;
- (id)conversationWithIdentifier:(id)a0;
- (void)_tagNaturalLanguageEnrichmentsForEntity:(id)a0;
- (void)addEnrichmentForEvents:(id)a0 forMessage:(id)a1 toEntity:(id)a2;
- (id)initWithoutSharedInstance;
- (BOOL)_shouldProcessMessage:(id)a0 entity:(id)a1;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;

@end
