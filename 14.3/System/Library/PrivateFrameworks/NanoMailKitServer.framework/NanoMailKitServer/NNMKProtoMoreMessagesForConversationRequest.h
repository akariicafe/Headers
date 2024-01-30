@class NSString, NSData;

@interface NNMKProtoMoreMessagesForConversationRequest : PBRequest <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (retain, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) BOOL hasBeforeDateReceived;
@property (retain, nonatomic) NSData *beforeDateReceived;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
