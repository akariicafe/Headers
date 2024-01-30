@class NSString, NSArray, VCControlChannel, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCSessionMessageTopic : NSObject {
    NSArray *associatedStrings;
    BOOL allowConcurrent;
    BOOL requireReliable;
    NSObject<OS_dispatch_queue> *outMessageQueue;
    VCControlChannel *controlChannel;
    NSObject<OS_dispatch_queue> *inMessageQueue;
    id /* block */ sendMessageCompletionBlock;
    id /* block */ sendMessageDataCompletionBlock;
    id /* block */ receiveMessageBlock;
    id /* block */ receiveMessageDictionaryBlock;
    long long latestOutgoingMessageIndex;
    BOOL shouldEncodeTopicKeyInMessage;
    NSMutableDictionary *transactionCache;
}

@property (nonatomic, setter=setIsSendingEnabled:) BOOL isSendingEnabled;
@property (readonly, nonatomic) NSString *topicKey;

- (void)sendMessage:(id)a0;
- (void)dealloc;
- (id)initWithTopicKey:(id)a0 strings:(id)a1 allowConcurrent:(BOOL)a2 requireReliable:(BOOL)a3 controlChannel:(id)a4 sendMessageDataCompletionHandler:(id /* block */)a5 receiveMessageDictionaryHandler:(id /* block */)a6;
- (id)initWithTopicKey:(id)a0 strings:(id)a1 allowConcurrent:(BOOL)a2 controlChannel:(id)a3 sendCompletionHandler:(id /* block */)a4 receiveHandler:(id /* block */)a5;
- (void)sendMessage:(id)a0 participantID:(unsigned long long)a1;
- (BOOL)sendReliableMessage:(id)a0 participantID:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)isPayloadAssociated:(id)a0;
- (void)passMessage:(id)a0 sequence:(int)a1 fromParticipant:(id)a2;
- (int)expectedMessageType;
- (void)clearTransactionCacheForParticipant:(id)a0;
- (id)initWithTopicKey:(id)a0 strings:(id)a1 allowConcurrent:(BOOL)a2 requireReliable:(BOOL)a3 controlChannel:(id)a4 sendCompletionHandler:(id /* block */)a5 receiveHandler:(id /* block */)a6 sendMessageDataCompletionHandler:(id /* block */)a7 receiveMessageDictionaryHandler:(id /* block */)a8;
- (void)sendMessage:(id)a0 participantID:(unsigned long long)a1 withSequence:(long long)a2 numRetries:(long long)a3;
- (void)handleSendMessageDidSucceed:(BOOL)a0 message:(id)a1 participantID:(id)a2;
- (id)messageForCommand:(id)a0;
- (void)purgeExpiredEntries:(double)a0 messageHistory:(id)a1 participantID:(id)a2;
- (BOOL)isDuplicateMessageID:(id)a0 messageHistory:(id)a1 participantID:(id)a2;

@end
