@class CLPMeta, CLPPressure, CLPLocation;

@interface CLPPressureCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) CLPPressure *pressure;
@property (retain, nonatomic) CLPLocation *pressureLocation;

- (Class)responseClass;
- (unsigned int)requestTypeCode;
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
