@class NSString, CPMessagingHandle, CPMessagingConversationReport, NSMutableArray, CPMessagingConversationMember;

@interface CPMessagingConversation : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char locallyCreated : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasUUIDString;
@property (retain, nonatomic) NSString *uUIDString;
@property (readonly, nonatomic) BOOL hasGroupUUIDString;
@property (retain, nonatomic) NSString *groupUUIDString;
@property (readonly, nonatomic) BOOL hasMessagesGroupUUIDString;
@property (retain, nonatomic) NSString *messagesGroupUUIDString;
@property (nonatomic) BOOL hasLocallyCreated;
@property (nonatomic) BOOL locallyCreated;
@property (readonly, nonatomic) BOOL hasInitiator;
@property (retain, nonatomic) CPMessagingHandle *initiator;
@property (readonly, nonatomic) BOOL hasLocalMember;
@property (retain, nonatomic) CPMessagingConversationMember *localMember;
@property (retain, nonatomic) NSMutableArray *remoteMembers;
@property (retain, nonatomic) NSMutableArray *activeRemoteParticipants;
@property (retain, nonatomic) NSMutableArray *activitySessions;
@property (readonly, nonatomic) BOOL hasReportData;
@property (retain, nonatomic) CPMessagingConversationReport *reportData;
@property (readonly, nonatomic) BOOL hasConversationProviderIdentifier;
@property (retain, nonatomic) NSString *conversationProviderIdentifier;

+ (Class)remoteMembersType;
+ (Class)activeRemoteParticipantsType;
+ (Class)activitySessionsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addRemoteMembers:(id)a0;
- (void)addActiveRemoteParticipants:(id)a0;
- (void)addActivitySessions:(id)a0;
- (unsigned long long)remoteMembersCount;
- (void)clearRemoteMembers;
- (id)remoteMembersAtIndex:(unsigned long long)a0;
- (unsigned long long)activeRemoteParticipantsCount;
- (void)clearActiveRemoteParticipants;
- (id)activeRemoteParticipantsAtIndex:(unsigned long long)a0;
- (unsigned long long)activitySessionsCount;
- (void)clearActivitySessions;
- (id)activitySessionsAtIndex:(unsigned long long)a0;

@end
