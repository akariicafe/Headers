@class NSArray, _TtC23SiriInvocationAnalytics15StreamsBookmark, NSError;

@interface SiriInvocationAnalytics.ConversationStreamAMIS : SiriInvocationAnalytics.ConversationStream

- (id)init;
- (void)streamConversationsWithBookmark:(_TtC23SiriInvocationAnalytics15StreamsBookmark *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;

@end
