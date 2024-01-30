@class NSString, NNMKProtoMailbox, NSData, NSMutableArray;

@interface NNMKProtoInitialMessagesSync : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; unsigned char mailboxSyncVersion : 1; unsigned char syncedMailboxType : 1; unsigned char organizedByThread : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (retain, nonatomic) NSMutableArray *initialMessages;
@property (readonly, nonatomic) BOOL hasDateForRequestingMoreMessages;
@property (retain, nonatomic) NSData *dateForRequestingMoreMessages;
@property (nonatomic) BOOL hasSyncedMailboxType;
@property (nonatomic) unsigned int syncedMailboxType;
@property (readonly, nonatomic) BOOL hasSyncedMailboxAccountId;
@property (retain, nonatomic) NSString *syncedMailboxAccountId;
@property (readonly, nonatomic) BOOL hasSyncedMailboxURL;
@property (retain, nonatomic) NSString *syncedMailboxURL;
@property (readonly, nonatomic) BOOL hasSyncedMailboxCustomName;
@property (retain, nonatomic) NSString *syncedMailboxCustomName;
@property (readonly, nonatomic) BOOL hasMailbox;
@property (retain, nonatomic) NNMKProtoMailbox *mailbox;
@property (nonatomic) BOOL hasMailboxSyncVersion;
@property (nonatomic) unsigned int mailboxSyncVersion;
@property (nonatomic) BOOL hasOrganizedByThread;
@property (nonatomic) BOOL organizedByThread;

+ (Class)initialMessageType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addInitialMessage:(id)a0;
- (void)clearInitialMessages;
- (id)initialMessageAtIndex:(unsigned long long)a0;
- (unsigned long long)initialMessagesCount;

@end
