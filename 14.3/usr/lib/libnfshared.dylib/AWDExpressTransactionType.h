@class NSData;

@interface AWDExpressTransactionType : PBCodable <NSCopying> {
    struct { unsigned char appletType : 1; unsigned char count : 1; unsigned char spid : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRidAndPix;
@property (retain, nonatomic) NSData *ridAndPix;
@property (nonatomic) BOOL hasSpid;
@property (nonatomic) unsigned int spid;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasAppletType;
@property (nonatomic) unsigned int appletType;

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
