@class NSString, PBUnknownFields;

@interface GEOPDResolvedItem : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_extractedTerm;
    int _resolvedItemType;
    unsigned int _resultIndex;
    struct { unsigned char has_resolvedItemType : 1; unsigned char has_resultIndex : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasExtractedTerm;
@property (retain, nonatomic) NSString *extractedTerm;
@property (nonatomic) BOOL hasResolvedItemType;
@property (nonatomic) int resolvedItemType;
@property (nonatomic) BOOL hasResultIndex;
@property (nonatomic) unsigned int resultIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resolvedItemTypeAsString:(int)a0;
- (int)StringAsResolvedItemType:(id)a0;
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
