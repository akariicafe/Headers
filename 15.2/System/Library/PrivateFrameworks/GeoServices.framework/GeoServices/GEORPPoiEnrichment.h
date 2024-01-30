@class PBDataReader, GEORPScorecard, NSMutableArray;

@interface GEORPPoiEnrichment : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_images;
    GEORPScorecard *_scorecard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_images : 1; unsigned char read_scorecard : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasScorecard;
@property (retain, nonatomic) GEORPScorecard *scorecard;
@property (retain, nonatomic) NSMutableArray *images;

+ (Class)imageType;
+ (BOOL)isValid:(id)a0;

- (void)clearImages;
- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addImage:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)imageAtIndex:(unsigned long long)a0;
- (unsigned long long)imagesCount;
- (id)dictionaryRepresentation;

@end
