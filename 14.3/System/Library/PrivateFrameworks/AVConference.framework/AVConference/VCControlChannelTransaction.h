@class NSData, NSNumber;
@protocol VCControlChannelTransactionDelegate;

@interface VCControlChannelTransaction : VCObject {
    NSData *_data;
    unsigned int _sessionID;
    NSNumber *_participantID;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _transactionLock;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _transactionDone;
    BOOL _isConfirmed;
    BOOL _isFlushed;
    id<VCControlChannelTransactionDelegate> _weakTransactionDelegate;
}

+ (BOOL)sendUnreliableMessage:(id)a0 sessionID:(unsigned int)a1 participantID:(id)a2 transactionDelegate:(id)a3;

- (void)dealloc;
- (id)initWithTransportSessionID:(unsigned int)a0 transactionData:(id)a1 participantID:(id)a2 transactionDelegate:(id)a3;
- (void)flushTransactions;
- (void)confirmedTransactionByParticipantID:(id)a0 sessionID:(unsigned int)a1;
- (BOOL)sendReliableMessage:(id)a0 sessionID:(unsigned int)a1 participantID:(id)a2 timeout:(id)a3;

@end
