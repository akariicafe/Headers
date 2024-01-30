@class HDIDSMessageCenter, NSString, HDIDSParticipant, NSData, NSDictionary, HDDaemonTransaction;

@interface HDIDSOutgoingResponse : NSObject <HDNanoSyncDescription> {
    HDDaemonTransaction *_transaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *requestIdsIdentifier;
@property (retain, nonatomic) HDIDSMessageCenter *messageCenter;
@property (nonatomic) unsigned short requestMessageID;
@property (getter=isSent) BOOL sent;
@property (nonatomic) unsigned short messageID;
@property (retain, nonatomic) HDIDSParticipant *toParticipant;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) id pbResponse;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double sendTimeout;
@property (retain, nonatomic) NSDictionary *persistentUserInfo;
@property (nonatomic) BOOL doNotCompress;
@property (nonatomic) BOOL forceLocalDelivery;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)send;
- (id)nanoSyncDescription;
- (void)configureWithActivationRestore:(id)a0 syncStore:(id)a1;
- (void)configureWithStatus:(id)a0 syncStore:(id)a1;

@end
