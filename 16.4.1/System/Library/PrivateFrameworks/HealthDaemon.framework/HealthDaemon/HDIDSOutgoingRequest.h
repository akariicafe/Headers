@class HDIDSMessageCenter, NSString, HDIDSParticipant, NSData, PBCodable, NSDictionary;

@interface HDIDSOutgoingRequest : NSObject <HDNanoSyncDescription> {
    NSString *_idsIdentifier;
    HDIDSMessageCenter *_messageCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PBCodable *pbRequest;
@property (readonly, nonatomic) unsigned short messageID;
@property (readonly, nonatomic) HDIDSParticipant *toParticipant;
@property (retain, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double sendTimeout;
@property (nonatomic) double responseTimeout;
@property (retain, nonatomic) NSDictionary *persistentUserInfo;
@property (nonatomic) BOOL doNotCompress;
@property (nonatomic) BOOL queueOnly1;
@property (nonatomic) BOOL forceLocalDelivery;

+ (id)activationRequestWithRestore:(id)a0 syncStore:(id)a1;
+ (id)changeRequestWithChangeSet:(id)a0 status:(id)a1 syncStore:(id)a2;
+ (id)requestWithMessageID:(unsigned short)a0 participant:(id)a1;
+ (id)speculativeChangeRequestWithChangeSet:(id)a0 syncStore:(id)a1;

@end
