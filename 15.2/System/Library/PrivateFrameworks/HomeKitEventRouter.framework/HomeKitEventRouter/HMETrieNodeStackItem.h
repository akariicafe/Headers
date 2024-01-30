@class NSString, HMETrieNode;

@interface HMETrieNodeStackItem : NSObject

@property (readonly) NSString *parentTopic;
@property (readonly) HMETrieNode *node;

- (void).cxx_destruct;

@end
