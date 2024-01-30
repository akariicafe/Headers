@class CLPMeta, NSMutableArray;

@interface CLPWtwCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *wtwLocations;

+ (Class)wtwLocationType;

- (unsigned int)requestTypeCode;
- (Class)responseClass;
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
- (void)addWtwLocation:(id)a0;
- (unsigned long long)wtwLocationsCount;
- (void)clearWtwLocations;
- (id)wtwLocationAtIndex:(unsigned long long)a0;

@end
