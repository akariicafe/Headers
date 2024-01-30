@class PBDataReader, NSString, GEOPDRelatedSearchSuggestion, PBUnknownFields;

@interface GEOPDDisplayHeaderSubstitute : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_interpretedQuery;
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _substituteType;
    struct { unsigned char has_substituteType : 1; unsigned char read_unknownFields : 1; unsigned char read_interpretedQuery : 1; unsigned char read_relatedSearchSuggestion : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasSubstituteType;
@property (nonatomic) int substituteType;
@property (readonly, nonatomic) BOOL hasInterpretedQuery;
@property (retain, nonatomic) NSString *interpretedQuery;
@property (readonly, nonatomic) BOOL hasRelatedSearchSuggestion;
@property (retain, nonatomic) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)substituteTypeAsString:(int)a0;
- (int)StringAsSubstituteType:(id)a0;

@end
