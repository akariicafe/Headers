@class NSNumber, NSMutableDictionary;
@protocol VCControlChannelTransactionDelegate;

@interface VCControlChannelDialog : VCObject {
    unsigned int _sessionID;
    unsigned int _transactionID;
    NSNumber *_participantID;
    id<VCControlChannelTransactionDelegate> _weakTransactionDelegate;
    NSMutableDictionary *_transactions;
}

+ (BOOL)sendUnreliableMessage:(id)a0 sessionID:(unsigned int)a1 participantID:(id)a2 transactionDelegate:(id)a3;
+ (BOOL)encryptMessage:(id)a0 buffer:(char *)a1 size:(unsigned int)a2 sequenceNumber:(unsigned short)a3 transactionDelegate:(id)a4;
+ (id)newEncryptedMessageFromMessage:(id)a0 sequenceNumber:(unsigned short)a1 transactionDelegate:(id)a2;
+ (void)sendConfirmationToParticipantID:(id)a0 transactionID:(id)a1 sessionID:(unsigned int)a2 transactionDelegate:(id)a3;
+ (BOOL)processMessageFromParticipant:(id)a0 transactionID:(id)a1 status:(unsigned int)a2 sessionID:(unsigned int)a3 transactionDelegate:(id)a4;

- (void)dealloc;
- (void)removeTransactionForTransactionID:(int)a0;
- (id)initWithSessionID:(unsigned int)a0 participantID:(id)a1 transactionDelegate:(id)a2;
- (void)flushActiveDialogs;
- (BOOL)sendReliableMessage:(id)a0 transactionDelegate:(id)a1 timeout:(id)a2;
- (BOOL)processMessageFromParticipant:(id)a0 transactionID:(id)a1 status:(unsigned int)a2;

@end
