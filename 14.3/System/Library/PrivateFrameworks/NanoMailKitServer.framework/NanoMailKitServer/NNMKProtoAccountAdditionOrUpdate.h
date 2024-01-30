@class NSString, NSMutableArray;

@interface NNMKProtoAccountAdditionOrUpdate : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; unsigned char shouldArchive : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAccountId;
@property (retain, nonatomic) NSString *accountId;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL hasShouldArchive;
@property (nonatomic) BOOL shouldArchive;
@property (retain, nonatomic) NSMutableArray *emails;
@property (retain, nonatomic) NSMutableArray *mailboxes;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (readonly, nonatomic) BOOL hasDefaultEmail;
@property (retain, nonatomic) NSString *defaultEmail;
@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *username;
@property (readonly, nonatomic) BOOL hasLocalId;
@property (retain, nonatomic) NSString *localId;
@property (readonly, nonatomic) BOOL hasParentId;
@property (retain, nonatomic) NSString *parentId;

+ (Class)mailboxesType;
+ (Class)emailType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addEmail:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addMailboxes:(id)a0;
- (unsigned long long)mailboxesCount;
- (void)clearMailboxes;
- (id)mailboxesAtIndex:(unsigned long long)a0;
- (unsigned long long)emailsCount;
- (void)clearEmails;
- (id)emailAtIndex:(unsigned long long)a0;

@end
