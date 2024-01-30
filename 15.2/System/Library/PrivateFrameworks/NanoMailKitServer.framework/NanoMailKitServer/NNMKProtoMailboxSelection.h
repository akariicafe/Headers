@class NSMutableArray;

@interface NNMKProtoMailboxSelection : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (retain, nonatomic) NSMutableArray *mailboxes;

+ (Class)mailboxesType;
+ (id)protoMailboxSelectionFromMailboxSelection:(id)a0 fullSyncVersion:(unsigned long long)a1;

- (id)mailboxSelection;
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
- (void)addMailboxes:(id)a0;
- (unsigned long long)mailboxesCount;
- (void)clearMailboxes;
- (id)mailboxesAtIndex:(unsigned long long)a0;

@end
