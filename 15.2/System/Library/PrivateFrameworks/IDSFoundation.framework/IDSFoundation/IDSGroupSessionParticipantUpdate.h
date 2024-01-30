@class NSUUID, NSString, NSData, NSDate, NSArray, NSDictionary;

@interface IDSGroupSessionParticipantUpdate : NSObject

@property (readonly, nonatomic) BOOL isInitiator;
@property (readonly, nonatomic) NSUUID *groupUUID;
@property (readonly, nonatomic) unsigned long long participantIdentifier;
@property (readonly, nonatomic) NSString *participantDestinationID;
@property (readonly, nonatomic) unsigned long long participantUpdateType;
@property (readonly, nonatomic) unsigned long long participantUpdateSubtype;
@property (readonly, nonatomic) BOOL fromServer;
@property (readonly, nonatomic) NSDate *serverDate;
@property (readonly, nonatomic) NSData *participantData;
@property (readonly, nonatomic) NSData *clientContextData;
@property (readonly, nonatomic) NSArray *members;
@property (readonly, nonatomic) NSDictionary *participantIDs;
@property (readonly, nonatomic) NSUUID *relaySessionID;

- (id)initWithGroupUUID:(id)a0 isInitiator:(BOOL)a1 participantIdentifier:(unsigned long long)a2 participantDestinationID:(id)a3 participantUpdateType:(unsigned long long)a4 participantUpdateSubtype:(unsigned long long)a5 fromServer:(BOOL)a6 serverDate:(id)a7 participantData:(id)a8 clientContextData:(id)a9 members:(id)a10 participantIDs:(id)a11 relaySessionID:(id)a12;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)dictionaryRepresentation;

@end
