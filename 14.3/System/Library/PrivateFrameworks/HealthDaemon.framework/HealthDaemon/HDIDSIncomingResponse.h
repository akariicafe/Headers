@class HDIDSMessageCenter, NSString, HDIDSParticipant, NSData, NSDate, NSDictionary;

@interface HDIDSIncomingResponse : NSObject <HDNanoSyncDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) HDIDSMessageCenter *messageCenter;
@property (retain, nonatomic) HDIDSParticipant *fromParticipant;
@property (nonatomic) unsigned short messageID;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSString *requestIDSIdentifier;
@property (retain, nonatomic) NSDate *requestSent;
@property (retain, nonatomic) NSDictionary *requestPersistentUserInfo;
@property (readonly, nonatomic) id pbResponse;

@end
