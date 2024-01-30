@class NSString, NSMutableArray, PBDataReader;

@interface GEORPFeedbackTileFeatureInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_featureHandles;
    NSString *_featureName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_featureHandles : 1; unsigned char read_featureName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *featureHandles;
@property (readonly, nonatomic) BOOL hasFeatureName;
@property (retain, nonatomic) NSString *featureName;

+ (BOOL)isValid:(id)a0;
+ (Class)featureHandleType;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (void)addFeatureHandle:(id)a0;
- (unsigned long long)featureHandlesCount;
- (void)clearFeatureHandles;
- (id)featureHandleAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
