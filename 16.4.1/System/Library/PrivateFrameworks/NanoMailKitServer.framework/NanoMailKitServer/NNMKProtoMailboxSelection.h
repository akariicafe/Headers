@class NSMutableArray;

@interface NNMKProtoMailboxSelection : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (retain, nonatomic) NSMutableArray *mailboxes;

+ (Class)mailboxesType;
+ (id)protoMailboxSelectionFromMailboxSelection:(id)a0 fullSyncVersion:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mailboxSelection;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addMailboxes:(id)a0;
- (void)clearMailboxes;
- (id)mailboxesAtIndex:(unsigned long long)a0;
- (unsigned long long)mailboxesCount;

@end
