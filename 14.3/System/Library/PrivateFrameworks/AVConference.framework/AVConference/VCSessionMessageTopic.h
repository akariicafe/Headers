@class NSString, NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCSessionMessageTopic : NSObject {
    NSArray *associatedStrings;
    BOOL allowConcurrent;
    NSObject<OS_dispatch_queue> *outMessageQueue;
    id controlChannelWeak;
    NSObject<OS_dispatch_queue> *inMessageQueue;
    id /* block */ receiveBlock;
    long long latestOutgoingMessageIndex;
    BOOL shouldEncodeTopicKeyInMessage;
    NSString *topicPrefix;
    NSMutableDictionary *transactionCache;
}

@property (nonatomic, setter=setIsSendingEnabled:) BOOL isSendingEnabled;
@property (readonly) NSString *topicKey;

- (void)sendMessage:(id)a0;
- (void)dealloc;
- (id)initWithTopicKey:(id)a0 strings:(id)a1 allowConcurrent:(BOOL)a2 controlChannel:(id)a3 receiveHandler:(id /* block */)a4;
- (id)messageForCommand:(id)a0;
- (void)sendMessage:(id)a0 participantID:(unsigned long long)a1;
- (BOOL)isStringAssociated:(id)a0;
- (void)passMessage:(id)a0 sequence:(int)a1 fromParticipant:(id)a2;
- (void)clearTransactionCacheForParticipant:(id)a0;
- (void)sendMessage:(id)a0 participantID:(unsigned long long)a1 withSequence:(long long)a2 numRetries:(long long)a3;
- (BOOL)isDuplicateMessageID:(id)a0 messageHistory:(id)a1 participantID:(id)a2;
- (void)purgeExpiredEntries:(double)a0 messageHistory:(id)a1 participantID:(id)a2;

@end
