@interface RKMessageIntentRecognizer : NSObject

+ (id)sharedManager;
+ (id)getRangesOfKeywords:(id)a0 forMessage:(id)a1;

- (void)dealloc;
- (id)init;
- (id)copyAttributedTokensForMessage:(id)a0 conversationTurns:(id)a1 metadata:(id)a2 languageID:(id)a3;
- (void *)getMessageIntentRecognizer:(id)a0;

@end
