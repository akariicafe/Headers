@class GEOPDOrientedBoundingBox, NSMutableArray, PBDataReader;

@interface GEOPDStorefrontFace : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_features;
    GEOPDOrientedBoundingBox *_geometry;
    unsigned long long _groupId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_groupId : 1; unsigned char read_features : 1; unsigned char read_geometry : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasGeometry;
@property (retain, nonatomic) GEOPDOrientedBoundingBox *geometry;
@property (retain, nonatomic) NSMutableArray *features;
@property (nonatomic) BOOL hasGroupId;
@property (nonatomic) unsigned long long groupId;

+ (Class)featureType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addFeature:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)featuresCount;
- (void)clearFeatures;
- (id)featureAtIndex:(unsigned long long)a0;

@end
