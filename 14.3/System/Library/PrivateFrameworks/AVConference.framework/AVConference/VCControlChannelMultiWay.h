@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCControlChannelMultiWay : VCControlChannel <VCControlChannelTransactionDelegate> {
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_pidReceiveProc;
    NSMutableArray *_activeParticipants;
    BOOL _isCCReliableDataNotReceivedReported;
    NSMutableDictionary *_cryptors;
    void *_currentSendMKI;
    void *_currentReceiveMKI;
    NSObject<OS_dispatch_queue> *_sequentialKeyMaterialQueue;
}

@property (nonatomic) unsigned int transportSessionID;
@property (nonatomic) int vfdMessage;
@property (nonatomic) int vfdCancel;
@property (readonly, nonatomic) NSMutableDictionary *dialogs;
@property (readonly) BOOL isRunning;
@property (readonly) BOOL isEncryptionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)registerPeriodicTask;
- (void)deregisterPeriodicTask;
- (void)periodicTask:(void *)a0;
- (int)updateEncryption:(struct { char x0[65]; int x1; char x2[65]; int x3; void *x4; } *)a0 derivedSSRC:(unsigned int)a1;
- (int)getKeyDerivationCryptoSet:(struct { char x0[65]; int x1; char x2[65]; int x3; void *x4; } *)a0 withKeyMaterial:(id)a1 derivedSSRC:(unsigned int *)a2;
- (void)setCurrentSendMKIWithKeyMaterial:(id)a0;
- (void)initializeSRTPInfo:(struct tagSRTPINFO { int x0; int x1; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x2; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned short x7; unsigned int x8; unsigned int x9; unsigned long long x10; int x11; int x12; unsigned char x13[32]; unsigned char x14[14]; unsigned char x15[32]; unsigned char x16[14]; unsigned char x17[20]; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x18; void *x19; void *x20; unsigned int x21; unsigned int x22; struct os_unfair_lock_s { unsigned int x0; } x23; struct tagSRTPCryptContext { struct _CCCryptor *x0; } x24; struct tagSRTPTransformPolicy { int x0; int x1; int x2; int x3; int x4; int x5; int x6; } x25; unsigned int x26; } *)a0;
- (void)initializeEncryption;
- (void)finalizeEncryption;
- (void)updateEncryptionWithEncryptionMaterial:(struct { struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } x0; unsigned int x1; struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } x2; unsigned int x3; int x4; int x5; } *)a0;
- (void)updateEncryptionWithKeyMaterial:(id)a0;
- (BOOL)encryptData:(char *)a0 size:(int)a1 sequenceNumber:(unsigned short)a2;
- (BOOL)decryptWithMKI:(void *)a0 data:(char *)a1 size:(int)a2 sequenceNumber:(unsigned short)a3;
- (id)initWithTransportSessionID:(unsigned int)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1 mode:(int)a2;
- (void)addActiveParticipant:(unsigned long long)a0;
- (BOOL)sendReliableMessageAndWait:(id)a0 participantID:(unsigned long long)a1;
- (void)setEncryptionWithEncryptionMaterial:(struct { struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } x0; unsigned int x1; struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } x2; unsigned int x3; int x4; int x5; } *)a0;
- (BOOL)sendReliableMessage:(id)a0 participantID:(unsigned long long)a1 timeout:(unsigned int)a2 completion:(id /* block */)a3;
- (void)removeActiveParticipant:(unsigned long long)a0;
- (void)addNewKeyMaterial:(id)a0;
- (id)initWithTransportSessionID:(unsigned int)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1;
- (void)flushActiveMessages;
- (void)removeAllActiveParticipants;
- (BOOL)isParticipantActive:(unsigned long long)a0;
- (void)addToSentStats:(int)a0;
- (id)lastUsedMKIBytes;
- (void)scheduleAfter:(unsigned int)a0 block:(id /* block */)a1;
- (void)flushReportingStats;
- (BOOL)decryptMessageWithMKI:(void *)a0 message:(id)a1 buffer:(char *)a2 size:(unsigned int)a3 sequenceNumber:(unsigned short)a4;
- (id)processEncryptedPayload:(id)a0 isData:(BOOL)a1 sequenceNumber:(id)a2 MKIData:(id)a3 participantID:(id)a4;
- (BOOL)sendReliableMessageAndWait:(id)a0 participantID:(unsigned long long)a1 timeout:(id)a2;
- (void)flushRealTimeReportingStats;
- (void)addToReceivedStats:(int)a0;
- (void)messageReceived:(id)a0 participantInfo:(struct { unsigned short x0[12]; unsigned char x1; BOOL x2; unsigned short x3; unsigned char x4; BOOL x5; BOOL x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; unsigned short x11; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x12; BOOL x13; } *)a1;
- (void)sendReliableMessage:(id)a0 participantID:(unsigned long long)a1;
- (void)sendUnreliableMessage:(id)a0 participantID:(unsigned long long)a1;
- (void)broadcastUnreliableMessage:(id)a0;

@end
