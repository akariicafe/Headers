@class HDIDSMessageCenter, NSString, HDIDSParticipant, NSData, HDIDSOutgoingResponse;

@interface HDIDSIncomingRequest : NSObject <HDNanoSyncDescription> {
    id _pbRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) HDIDSMessageCenter *messageCenter;
@property (retain, nonatomic) HDIDSParticipant *fromParticipant;
@property (nonatomic) unsigned short messageID;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) BOOL expectsResponse;
@property (retain, nonatomic) HDIDSOutgoingResponse *response;
@property (readonly, nonatomic) id pbRequest;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setPbRequest:(id)a0;
- (void)configureResponse;
- (id)nanoSyncDescription;

@end
