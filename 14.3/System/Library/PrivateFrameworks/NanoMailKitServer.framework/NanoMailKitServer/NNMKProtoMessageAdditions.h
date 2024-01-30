@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessageAdditions : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; unsigned char mailboxSyncVersion : 1; unsigned char messagesAreNew : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (retain, nonatomic) NSMutableArray *messageAdditions;
@property (readonly, nonatomic) BOOL hasDateForRequestingMoreMessages;
@property (retain, nonatomic) NSData *dateForRequestingMoreMessages;
@property (nonatomic) BOOL hasMessagesAreNew;
@property (nonatomic) BOOL messagesAreNew;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) BOOL hasMailboxSyncVersion;
@property (nonatomic) unsigned int mailboxSyncVersion;

+ (Class)messageAdditionType;

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
- (void)addMessageAddition:(id)a0;
- (unsigned long long)messageAdditionsCount;
- (void)clearMessageAdditions;
- (id)messageAdditionAtIndex:(unsigned long long)a0;

@end
