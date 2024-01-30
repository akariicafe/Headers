@class CLPMeta, NSMutableArray, NSData;

@interface CLPPassCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *passLocations;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;

+ (Class)passLocationType;

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
- (void)addPassLocation:(id)a0;
- (unsigned long long)passLocationsCount;
- (void)clearPassLocations;
- (id)passLocationAtIndex:(unsigned long long)a0;

@end
