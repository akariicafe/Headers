@class PBUnknownFields;

@interface GEOPDPlaceCollectionFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _expectedResultCount;
    BOOL _isCollectionView;
    BOOL _partiallyClientize;
    struct { unsigned char has_expectedResultCount : 1; unsigned char has_isCollectionView : 1; unsigned char has_partiallyClientize : 1; } _flags;
}

@property (nonatomic) BOOL hasExpectedResultCount;
@property (nonatomic) unsigned int expectedResultCount;
@property (nonatomic) BOOL hasPartiallyClientize;
@property (nonatomic) BOOL partiallyClientize;
@property (nonatomic) BOOL hasIsCollectionView;
@property (nonatomic) BOOL isCollectionView;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
