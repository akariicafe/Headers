@class NSString, SIRINLUEXTERNALUUID;

@interface SIRINLUEXTERNALRequestID : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdA;
@property (retain, nonatomic) NSString *idA;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId;
@property (readonly, nonatomic) BOOL hasConnectionId;
@property (retain, nonatomic) NSString *connectionId;

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

@end
