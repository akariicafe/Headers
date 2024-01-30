@interface VCControlChannelDialogV2 : VCControlChannelDialog {
    struct tagVCCryptor { } *_uplinkCryptor;
    struct tagVCCryptor { } *_downlinkCryptor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _uplinkCryptorLock;
}

- (void)dealloc;
- (id)allocEncryptedPayloadFromPayloadData:(id)a0;
- (id)copyDecryptedDataFromEncryptedPayload:(id)a0;
- (id)initWithSessionID:(unsigned int)a0 participantID:(id)a1 participantUUID:(id)a2 participantConfig:(struct { int x0; struct tagVCSecurityKeyHolder *x1; struct tagVCSecurityKeyHolder *x2; struct __CFData *x3; struct __CFData *x4; BOOL x5; } *)a3 transactionDelegate:(id)a4;
- (id)newDataFromMessage:(id)a0 topic:(id)a1 transactionID:(unsigned long long)a2 isReliable:(BOOL)a3 transactionDelegate:(id)a4;
- (id)processMessageData:(id)a0 participantID:(id)a1 topic:(id *)a2 transactionID:(id *)a3 messageStatus:(unsigned int *)a4 isInternalMessage:(BOOL *)a5;
- (void)sendConfirmationToParticipantID:(id)a0 transactionID:(id)a1 sessionID:(unsigned int)a2 transactionDelegate:(id)a3;

@end
