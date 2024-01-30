@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCControlChannelMultiWay : VCControlChannel <VCControlChannelTransactionDelegate> {
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_pidReceiveProc;
    NSMutableDictionary *_activeParticipants;
    NSMutableDictionary *_cryptors;
    void *_currentSendMKI;
    void *_currentReceiveMKI;
    NSObject<OS_dispatch_queue> *_sequentialKeyMaterialQueue;
    long long _transactionID;
    BOOL _didSubmitCCReliableDataNotReceivedSymptom;
}

@property (nonatomic) unsigned int transportSessionID;
@property (nonatomic) int vfdMessage;
@property (nonatomic) int vfdCancel;
@property (readonly, nonatomic) NSMutableDictionary *dialogs;
@property (readonly) BOOL isRunning;
@property (readonly, nonatomic) unsigned long long nextTransactionID;
@property (readonly) BOOL isEncryptionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocPayoadDataFromVTPPacket:(struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer *x0; unsigned long long x1; char *x2; } *)a0 vpktFlags:(struct tagVPKTFLAG { int x0; unsigned int x1; unsigned int x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; int x7; int x8; struct tagVCSourceDestinationInfo { int x0; union { struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; struct { BOOL x0; unsigned short x1; } x2; } x0; struct { int x0; int x1; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x2; int x3; } x1; struct { unsigned int x0; struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } x1; BOOL x2; } x2; struct { id x0; } x3; } x1; unsigned int x2; struct tagVCSourceDestinationInfo *x3; void *x4; } x9; unsigned char x10; int x11; int x12; int x13; int x14; int x15; BOOL x16; BOOL x17; BOOL x18; struct tagVCIDSChannelDataFormat { unsigned short x0[12]; unsigned char x1; BOOL x2; unsigned short x3; unsigned char x4; BOOL x5; BOOL x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; unsigned short x11; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x12; BOOL x13; BOOL x14; BOOL x15; unsigned long long x16; BOOL x17; unsigned short x18; BOOL x19; BOOL x20; BOOL x21; } x19; struct tagPKT_TAG { unsigned long long x0[4]; } x20; unsigned int x21; unsigned char x22[16]; BOOL x23; BOOL x24; } *)a1 channelDataFormat:(struct tagVCIDSChannelDataFormat **)a2;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)addToSentStats:(int)a0;
- (BOOL)sendReliableMessage:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2 timeout:(unsigned int)a3 completion:(id /* block */)a4;
- (BOOL)addActiveParticipant:(unsigned long long)a0 participantUUID:(id)a1 withConfiguration:(struct { int x0; struct tagVCSecurityKeyHolder *x1; struct tagVCSecurityKeyHolder *x2; struct __CFData *x3; struct __CFData *x4; BOOL x5; } *)a2;
- (void)addNewKeyMaterial:(id)a0;
- (void)addToReceivedStats:(int)a0;
- (id)copyDialogForParticipantID:(id)a0;
- (BOOL)decryptWithMKI:(void *)a0 data:(char *)a1 size:(int)a2 sequenceNumber:(unsigned short)a3;
- (void)deregisterPeriodicTask;
- (BOOL)encryptData:(char *)a0 size:(int)a1 sequenceNumber:(unsigned short)a2;
- (void)finalizeEncryption;
- (void)flushActiveMessages;
- (void)flushRealTimeReportingStats;
- (void)flushReportingStats;
- (int)getKeyDerivationCryptoSet:(struct { char x0[65]; int x1; char x2[65]; int x3; void *x4; } *)a0 withKeyMaterial:(id)a1 derivedSSRC:(unsigned int *)a2;
- (id)initWithTransportSessionID:(unsigned int)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1;
- (id)initWithTransportSessionID:(unsigned int)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1 mode:(int)a2;
- (void)initializeEncryption;
- (void)initializeSRTPInfo:(struct tagSRTPINFO { int x0; int x1; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x2; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned short x7; unsigned int x8; unsigned int x9; unsigned long long x10; int x11; int x12; unsigned char x13[32]; unsigned char x14[14]; unsigned char x15[32]; unsigned char x16[14]; unsigned char x17[20]; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x18; void *x19; void *x20; unsigned int x21; unsigned int x22; struct os_unfair_lock_s { unsigned int x0; } x23; struct tagSRTPCryptContext { struct _CCCryptor *x0; } x24; struct tagSRTPTransformPolicy { int x0; int x1; int x2; int x3; int x4; int x5; int x6; } x25; unsigned int x26; BOOL x27; } *)a0;
- (BOOL)isParticipantActive:(unsigned long long)a0;
- (id)lastUsedMKIBytes;
- (void)messageReceived:(id)a0 participantInfo:(struct tagVCIDSChannelDataFormat { unsigned short x0[12]; unsigned char x1; BOOL x2; unsigned short x3; unsigned char x4; BOOL x5; BOOL x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; unsigned short x11; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x12; BOOL x13; BOOL x14; BOOL x15; unsigned long long x16; BOOL x17; unsigned short x18; BOOL x19; BOOL x20; BOOL x21; } *)a1;
- (void)periodicTask:(void *)a0;
- (void)processParticipantRemoval:(id)a0;
- (int)protocolVersionforParticipantID:(id)a0;
- (void)registerPeriodicTask;
- (id)remoteParticipantIDFromChannelDataFormat:(struct tagVCIDSChannelDataFormat { unsigned short x0[12]; unsigned char x1; BOOL x2; unsigned short x3; unsigned char x4; BOOL x5; BOOL x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; unsigned short x11; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x12; BOOL x13; BOOL x14; BOOL x15; unsigned long long x16; BOOL x17; unsigned short x18; BOOL x19; BOOL x20; BOOL x21; } *)a0;
- (void)removeActiveParticipant:(unsigned long long)a0;
- (void)removeAllActiveParticipants;
- (void)reportSignificantHandshakeDelaySymptomForParticipantID:(id)a0;
- (void)scheduleAfter:(unsigned int)a0 block:(id /* block */)a1;
- (void)sendReliableMessage:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2;
- (BOOL)sendReliableMessage:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2 timeout:(unsigned int)a3 withOptions:(id)a4 completion:(id /* block */)a5;
- (BOOL)sendReliableMessageAndWait:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2;
- (BOOL)sendReliableMessageAndWait:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2 timeout:(id)a3 withOptions:(id)a4;
- (void)sendUnreliableMessage:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2;
- (void)setCurrentSendMKIWithKeyMaterial:(id)a0;
- (void)setEncryptionWithEncryptionMaterial:(struct { struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } x0; unsigned int x1; struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } x2; unsigned int x3; int x4; int x5; } *)a0;
- (int)updateEncryption:(struct { char x0[65]; int x1; char x2[65]; int x3; void *x4; } *)a0 derivedSSRC:(unsigned int)a1;
- (void)updateEncryptionWithEncryptionMaterial:(struct { struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } x0; unsigned int x1; struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } x2; unsigned int x3; int x4; int x5; } *)a0;
- (void)updateEncryptionWithKeyMaterial:(id)a0;
- (void)updateTransactionIDWithKeyMaterial:(id)a0;

@end
