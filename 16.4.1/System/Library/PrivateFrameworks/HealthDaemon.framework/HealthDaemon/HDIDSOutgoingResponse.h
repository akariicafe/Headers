@class HDIDSMessageCenter, NSString, HDIDSParticipant, NSData, PBCodable, NSDictionary, HDDaemonTransaction;

@interface HDIDSOutgoingResponse : NSObject <HDNanoSyncDescription> {
    HDDaemonTransaction *_transaction;
    BOOL _sent;
    unsigned short _requestMessageID;
    unsigned short _messageID;
    NSString *_requestIdsIdentifier;
    HDIDSMessageCenter *_messageCenter;
    HDIDSParticipant *_toParticipant;
    NSString *_idsIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PBCodable *pbResponse;
@property (readonly, copy, nonatomic) NSString *requestIdsIdentifier;
@property (readonly, nonatomic) HDIDSMessageCenter *messageCenter;
@property (readonly, nonatomic) unsigned short requestMessageID;
@property (readonly, nonatomic) unsigned short messageID;
@property (readonly, nonatomic) HDIDSParticipant *toParticipant;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double sendTimeout;
@property (retain, nonatomic) NSDictionary *persistentUserInfo;
@property (nonatomic) BOOL doNotCompress;
@property (nonatomic) BOOL forceLocalDelivery;

- (void)send;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)configureWithActivationRestore:(id)a0 syncStore:(id)a1;
- (void)configureWithStatus:(id)a0 syncStore:(id)a1;
- (id)nanoSyncDescription;

@end
