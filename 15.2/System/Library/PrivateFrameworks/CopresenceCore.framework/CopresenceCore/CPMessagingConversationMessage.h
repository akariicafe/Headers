@class NSString, CPMessagingConversationReport, NSData, NSMutableArray;

@interface CPMessagingConversationMessage : PBCodable <NSCopying> {
    struct { unsigned char customType : 1; unsigned char disconnectedReason : 1; unsigned char type : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *activeParticipants;
@property (readonly, nonatomic) BOOL hasConversationGroupUUIDString;
@property (retain, nonatomic) NSString *conversationGroupUUIDString;
@property (retain, nonatomic) NSMutableArray *addedMembers;
@property (nonatomic) BOOL hasDisconnectedReason;
@property (nonatomic) unsigned int disconnectedReason;
@property (retain, nonatomic) NSMutableArray *activitySessions;
@property (readonly, nonatomic) BOOL hasReportData;
@property (retain, nonatomic) CPMessagingConversationReport *reportData;
@property (readonly, nonatomic) BOOL hasUnicastConnectorBlob;
@property (retain, nonatomic) NSData *unicastConnectorBlob;
@property (nonatomic) BOOL hasCustomType;
@property (nonatomic) unsigned int customType;
@property (readonly, nonatomic) BOOL hasCustomMessageData;
@property (retain, nonatomic) NSData *customMessageData;

+ (Class)activitySessionsType;
+ (Class)activeParticipantsType;
+ (Class)addedMembersType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addActivitySessions:(id)a0;
- (unsigned long long)activitySessionsCount;
- (void)clearActivitySessions;
- (id)activitySessionsAtIndex:(unsigned long long)a0;
- (void)addActiveParticipants:(id)a0;
- (void)addAddedMembers:(id)a0;
- (unsigned long long)activeParticipantsCount;
- (void)clearActiveParticipants;
- (id)activeParticipantsAtIndex:(unsigned long long)a0;
- (unsigned long long)addedMembersCount;
- (void)clearAddedMembers;
- (id)addedMembersAtIndex:(unsigned long long)a0;

@end
