@class RMSServiceMessage;

@interface RMSUnpairServiceMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) RMSServiceMessage *service;

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

@end
