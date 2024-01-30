@class NSString;

@interface BLTPBBulletinAttachment : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char isUpdated : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;
@property (readonly, nonatomic) BOOL hasURL;
@property (retain, nonatomic) NSString *uRL;
@property (nonatomic) BOOL hasIsUpdated;
@property (nonatomic) BOOL isUpdated;

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
- (id)attachmentURLURL;

@end
