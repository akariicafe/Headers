@class NSString, NSData;

@interface NNMKProtoFetchRequest : PBRequest <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; unsigned char wantsBatchedResponse : 1; unsigned char willTrimDatabaseAfterResults : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (retain, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasWantsBatchedResponse;
@property (nonatomic) BOOL wantsBatchedResponse;
@property (readonly, nonatomic) BOOL hasCurrentMessageIdsAndStatus;
@property (retain, nonatomic) NSData *currentMessageIdsAndStatus;
@property (readonly, nonatomic) BOOL hasCurrentDateForRequestingMoreMessages;
@property (retain, nonatomic) NSData *currentDateForRequestingMoreMessages;
@property (nonatomic) BOOL hasWillTrimDatabaseAfterResults;
@property (nonatomic) BOOL willTrimDatabaseAfterResults;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;

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

@end
