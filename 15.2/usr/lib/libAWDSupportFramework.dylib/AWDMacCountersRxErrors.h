@interface AWDMacCountersRxErrors : PBCodable <NSCopying> {
    struct { unsigned char rxbadfcs : 1; unsigned char rxbadplcp : 1; unsigned char rxcrsglitch : 1; unsigned char rxfrmtoolong : 1; unsigned char rxfrmtooshrt : 1; unsigned char rxinvmachdr : 1; unsigned char rxstrt : 1; } _has;
}

@property (nonatomic) BOOL hasRxfrmtoolong;
@property (nonatomic) unsigned long long rxfrmtoolong;
@property (nonatomic) BOOL hasRxfrmtooshrt;
@property (nonatomic) unsigned long long rxfrmtooshrt;
@property (nonatomic) BOOL hasRxinvmachdr;
@property (nonatomic) unsigned long long rxinvmachdr;
@property (nonatomic) BOOL hasRxbadfcs;
@property (nonatomic) unsigned long long rxbadfcs;
@property (nonatomic) BOOL hasRxbadplcp;
@property (nonatomic) unsigned long long rxbadplcp;
@property (nonatomic) BOOL hasRxcrsglitch;
@property (nonatomic) unsigned long long rxcrsglitch;
@property (nonatomic) BOOL hasRxstrt;
@property (nonatomic) unsigned long long rxstrt;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
