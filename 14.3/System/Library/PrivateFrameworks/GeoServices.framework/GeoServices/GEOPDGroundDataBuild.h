@class PBDataReader;

@interface GEOPDGroundDataBuild : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _capabilitys;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _lodWithTextures;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _bucketId;
    unsigned int _buildId;
    unsigned int _dataFormatVersion;
    unsigned int _dataOutputVersion;
    float _heightAboveGroundM;
    unsigned int _index;
    unsigned int _metricsVersion;
    int _type;
    struct { unsigned char has_bucketId : 1; unsigned char has_buildId : 1; unsigned char has_dataFormatVersion : 1; unsigned char has_dataOutputVersion : 1; unsigned char has_heightAboveGroundM : 1; unsigned char has_index : 1; unsigned char has_metricsVersion : 1; unsigned char has_type : 1; unsigned char read_capabilitys : 1; unsigned char read_lodWithTextures : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasIndex;
@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL hasBuildId;
@property (nonatomic) unsigned int buildId;
@property (nonatomic) BOOL hasDataFormatVersion;
@property (nonatomic) unsigned int dataFormatVersion;
@property (nonatomic) BOOL hasDataOutputVersion;
@property (nonatomic) unsigned int dataOutputVersion;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasHeightAboveGroundM;
@property (nonatomic) float heightAboveGroundM;
@property (readonly, nonatomic) unsigned long long capabilitysCount;
@property (readonly, nonatomic) int *capabilitys;
@property (nonatomic) BOOL hasBucketId;
@property (nonatomic) unsigned int bucketId;
@property (readonly, nonatomic) unsigned long long lodWithTexturesCount;
@property (readonly, nonatomic) unsigned int *lodWithTextures;
@property (nonatomic) BOOL hasMetricsVersion;
@property (nonatomic) unsigned int metricsVersion;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)capabilityAtIndex:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (void)addLodWithTextures:(unsigned int)a0;
- (unsigned int)lodWithTexturesAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsCapabilitys:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)setCapabilitys:(int *)a0 count:(unsigned long long)a1;
- (void)copyTo:(id)a0;
- (id)capabilitysAsString:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearCapabilitys;
- (id)initWithDictionary:(id)a0;
- (void)clearLodWithTextures;
- (void)setLodWithTextures:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)typeAsString:(int)a0;
- (void)addCapability:(int)a0;

@end
