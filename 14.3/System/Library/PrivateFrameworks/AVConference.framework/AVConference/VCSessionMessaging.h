@class NSString, NSMutableDictionary;

@interface VCSessionMessaging : NSObject <VCControlChannelDelegate> {
    NSMutableDictionary *topics;
    id controlChannelWeak;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)controlChannel:(id)a0 receivedMessage:(id)a1 transactionID:(unsigned int)a2 fromParticipant:(id)a3;
- (void)controlChannel:(id)a0 sendReliableMessage:(id)a1 didSucceed:(BOOL)a2 toParticipant:(id)a3;
- (id)newPackedMessageFromDictionary:(id)a0;
- (void)sendMessage:(id)a0 withTopic:(id)a1;
- (id)newPackedMessageFromMomentsDictionary:(id)a0;
- (void)stopMessaging;
- (id)messageForTopic:(id)a0 command:(id)a1;
- (id)initWithControlChannel:(id)a0 remoteVersion:(id)a1;
- (void)addTopic:(id)a0 associatedStrings:(id)a1 allowConcurrent:(BOOL)a2 receiveHandler:(id /* block */)a3;
- (id)newDictionaryFromUnpackedMessage:(id)a0;
- (id)newDictionaryFromUnpackedMomentsMessage:(id)a0;
- (void)sendMessage:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2;
- (void)startMessaging;
- (void)controlChannel:(id)a0 clearTransactionCacheForParticipant:(id)a1;

@end
