@class NSString, PAPBAccess;

@interface PAPBTCCAccess : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAccess;
@property (retain, nonatomic) PAPBAccess *access;
@property (readonly, nonatomic) BOOL hasTccService;
@property (retain, nonatomic) NSString *tccService;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
