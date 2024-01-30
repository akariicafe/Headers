@class NSString;

@interface NNMKProtoMailbox : PBCodable <NSCopying> {
    struct { unsigned char filterType : 1; unsigned char type : 1; unsigned char syncEnabled : 1; unsigned char syncRequested : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAccountId;
@property (retain, nonatomic) NSString *accountId;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (readonly, nonatomic) BOOL hasCustomName;
@property (retain, nonatomic) NSString *customName;
@property (nonatomic) BOOL hasFilterType;
@property (nonatomic) unsigned int filterType;
@property (nonatomic) BOOL hasSyncEnabled;
@property (nonatomic) BOOL syncEnabled;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL hasSyncRequested;
@property (nonatomic) BOOL syncRequested;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;

+ (id)protoMailboxFromMailbox:(id)a0;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)mailbox;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
