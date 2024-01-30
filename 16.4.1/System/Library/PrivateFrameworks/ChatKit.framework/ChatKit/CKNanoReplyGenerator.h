@interface CKNanoReplyGenerator : NSObject

+ (void)_contextualRepliesForMessage:(id)a0 senderMessages:(id)a1 recipients:(id)a2 time:(id)a3 languageCode:(id)a4 languageCodeChangeDate:(id)a5 loadAsync:(BOOL)a6 includeDynamicSuggestions:(BOOL)a7 completion:(id /* block */)a8;
+ (void)_contextualRepliesForMessages:(id)a0 senderMessages:(id)a1 recipients:(id)a2 languageCode:(id)a3 languageCodeChangeDate:(id)a4 loadAsync:(BOOL)a5 includeDynamicSuggestions:(BOOL)a6 completion:(id /* block */)a7;
+ (void)_repliesForMessage:(id)a0 senderMessages:(id)a1 recipients:(id)a2 time:(id)a3 languageCode:(id)a4 languageCodeChangeDate:(id)a5 loadAsync:(BOOL)a6 completion:(id /* block */)a7;
+ (void)_repliesForMessages:(id)a0 senderMessages:(id)a1 recipients:(id)a2 languageCode:(id)a3 languageCodeChangeDate:(id)a4 loadAsync:(BOOL)a5 completion:(id /* block */)a6;
+ (void)primeResponseKitIfNeeded;
+ (id)repliesForMessage:(id)a0 senderMessages:(id)a1 recipients:(id)a2 time:(id)a3 languageCode:(id)a4 languageCodeChangeDate:(id)a5;
+ (void)repliesForMessage:(id)a0 senderMessages:(id)a1 recipients:(id)a2 time:(id)a3 languageCode:(id)a4 languageCodeChangeDate:(id)a5 completion:(id /* block */)a6;
+ (id)repliesForMessages:(id)a0 senderMessages:(id)a1 recipients:(id)a2 languageCode:(id)a3 languageCodeChangeDate:(id)a4;
+ (void)repliesForMessages:(id)a0 senderMessages:(id)a1 recipients:(id)a2 languageCode:(id)a3 languageCodeChangeDate:(id)a4 completion:(id /* block */)a5;

@end
