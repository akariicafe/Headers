@class SGConversationTracker;

@interface SGTextMessageConversationTracker : NSObject {
    SGConversationTracker *_conversationTracker;
}

+ (id)instance;
+ (id)getMergedPrompt:(id)a0 withParams:(id)a1;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)conversationForIdentifier:(id)a0;
- (id)addTextMessageItem:(id)a0;

@end
