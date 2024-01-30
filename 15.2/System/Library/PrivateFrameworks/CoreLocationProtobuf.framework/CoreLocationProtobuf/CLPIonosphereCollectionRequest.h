@class CLPMeta, NSMutableArray;

@interface CLPIonosphereCollectionRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasMeta;
@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *ionoDatas;

+ (Class)ionoDataType;

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
- (void)addIonoData:(id)a0;
- (unsigned long long)ionoDatasCount;
- (void)clearIonoDatas;
- (id)ionoDataAtIndex:(unsigned long long)a0;

@end
