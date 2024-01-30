@class HDIDSMessageCenter, NSString, HDIDSParticipant, NSData, PBCodable, NSDate, NSDictionary;

@interface HDIDSIncomingResponse : NSObject <HDNanoSyncDescription> {
    unsigned short _messageID;
    HDIDSParticipant *_fromParticipant;
    NSData *_data;
    NSString *_idsIdentifier;
    NSString *_requestIDSIdentifier;
    NSDate *_requestSent;
    NSDictionary *_requestPersistentUserInfo;
    HDIDSMessageCenter *_messageCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PBCodable *pbResponse;
@property (readonly, nonatomic) HDIDSParticipant *fromParticipant;
@property (readonly, nonatomic) unsigned short messageID;
@property (readonly, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIDSIdentifier;
@property (readonly, nonatomic) NSDate *requestSent;
@property (readonly, nonatomic) NSDictionary *requestPersistentUserInfo;

- (void).cxx_destruct;
- (id)nanoSyncDescription;

@end
