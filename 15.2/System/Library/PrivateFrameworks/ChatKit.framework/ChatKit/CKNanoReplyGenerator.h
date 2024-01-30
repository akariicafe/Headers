@interface CKNanoReplyGenerator : NSObject

+ (void)_repliesForMessage:(id)a0 recipients:(id)a1 time:(id)a2 languageCode:(id)a3 loadAsync:(BOOL)a4 completion:(id /* block */)a5;
+ (id)_cannedRepliesForLanguage:(id)a0;
+ (id)repliesForMessage:(id)a0 recipients:(id)a1 time:(id)a2 languageCode:(id)a3;
+ (void)_contextualRepliesForMessage:(id)a0 recipients:(id)a1 time:(id)a2 languageCode:(id)a3 loadAsync:(BOOL)a4 completion:(id /* block */)a5;
+ (void)repliesForMessage:(id)a0 recipients:(id)a1 time:(id)a2 languageCode:(id)a3 completion:(id /* block */)a4;
+ (void)primeResponseKitIfNeeded;

@end
