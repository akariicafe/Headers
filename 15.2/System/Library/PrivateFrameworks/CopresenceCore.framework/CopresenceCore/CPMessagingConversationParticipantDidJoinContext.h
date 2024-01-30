@class NSString, CPMessagingConversationMessage, CPMessagingConversationActivitySession, NSMutableArray;

@interface CPMessagingConversationParticipantDidJoinContext : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char isMirageAvailable : 1; unsigned char video : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *members;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) CPMessagingConversationMessage *message;
@property (readonly, nonatomic) BOOL hasMessagesGroupUUIDString;
@property (retain, nonatomic) NSString *messagesGroupUUIDString;
@property (readonly, nonatomic) BOOL hasMessagesGroupName;
@property (retain, nonatomic) NSString *messagesGroupName;
@property (readonly, nonatomic) BOOL hasActivitySession;
@property (retain, nonatomic) CPMessagingConversationActivitySession *activitySession;
@property (nonatomic) BOOL hasVideo;
@property (nonatomic) BOOL video;
@property (readonly, nonatomic) BOOL hasProviderIdentifier;
@property (retain, nonatomic) NSString *providerIdentifier;
@property (nonatomic) BOOL hasIsMirageAvailable;
@property (nonatomic) BOOL isMirageAvailable;

+ (Class)membersType;

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
- (void)addMembers:(id)a0;
- (unsigned long long)membersCount;
- (void)clearMembers;
- (id)membersAtIndex:(unsigned long long)a0;

@end
