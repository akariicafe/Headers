@class CLPMeta, NSMutableArray, NSData;

@interface CLPAppCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *appLocations;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;

+ (Class)appLocationType;

- (unsigned int)requestTypeCode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (Class)responseClass;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addAppLocation:(id)a0;
- (id)appLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)appLocationsCount;
- (void)clearAppLocations;

@end
