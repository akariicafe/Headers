@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOBusinessOptions : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributeKeys;
    NSMutableArray *_photoOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _maxBusinessResults;
    BOOL _includeBusinessHours;
    BOOL _includeCenter;
    struct { unsigned char has_maxBusinessResults : 1; unsigned char has_includeBusinessHours : 1; unsigned char has_includeCenter : 1; unsigned char read_unknownFields : 1; unsigned char read_attributeKeys : 1; unsigned char read_photoOptions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *photoOptions;
@property (retain, nonatomic) NSMutableArray *attributeKeys;
@property (nonatomic) BOOL hasIncludeBusinessHours;
@property (nonatomic) BOOL includeBusinessHours;
@property (nonatomic) BOOL hasMaxBusinessResults;
@property (nonatomic) int maxBusinessResults;
@property (nonatomic) BOOL hasIncludeCenter;
@property (nonatomic) BOOL includeCenter;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)photoOptionsType;
+ (Class)attributeKeyType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addPhotoOptions:(id)a0;
- (void)addAttributeKey:(id)a0;
- (unsigned long long)photoOptionsCount;
- (void)clearPhotoOptions;
- (id)photoOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)attributeKeysCount;
- (void)clearAttributeKeys;
- (id)attributeKeyAtIndex:(unsigned long long)a0;
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
