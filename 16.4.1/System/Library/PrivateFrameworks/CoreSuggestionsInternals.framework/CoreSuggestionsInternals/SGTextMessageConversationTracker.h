@class SGConversationTracker;

@interface SGTextMessageConversationTracker : NSObject {
    SGConversationTracker *_conversationTracker;
}

+ (id)instance;
+ (id)getMergedPrompt:(id)a0 withParams:(id)a1;

- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)addTextMessageItem:(id)a0;
- (id)conversationForIdentifier:(id)a0;

@end
