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
- (id)attachmentURLURL;

@end
