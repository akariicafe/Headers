@class NSUUID, NSString, NSData;

@interface IDSGroupSessionActiveParticipant : NSObject

@property (readonly, nonatomic) NSUUID *groupUUID;
@property (readonly, nonatomic) unsigned long long participantIdentifier;
@property (readonly, nonatomic) BOOL isKnown;
@property (readonly, nonatomic) NSString *participantURI;
@property (readonly, nonatomic) NSData *participantPushToken;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithGroupUUID:(id)a0 participantIdentifier:(unsigned long long)a1 isKnown:(BOOL)a2 participantURI:(id)a3 pushToken:(id)a4;
- (id)description;
- (id)dictionaryRepresentation;
- (id)debugDescription;

@end
