@class NSData, PBUnknownFields;

@interface GEOPDChildPlaceLookupByCategoryParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSData *_categoryMetadata;
    unsigned long long _parentMuid;
    struct { unsigned char has_parentMuid : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCategoryMetadata;
@property (retain, nonatomic) NSData *categoryMetadata;
@property (nonatomic) BOOL hasParentMuid;
@property (nonatomic) unsigned long long parentMuid;
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
