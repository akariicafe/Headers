@class GEOPDComponentFilter, PBUnknownFields;

@interface GEOPDComponentInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDComponentFilter *_filter;
    unsigned int _count;
    unsigned int _startIndex;
    int _type;
    int _urgency;
    BOOL _includeSource;
    struct { unsigned char has_count : 1; unsigned char has_startIndex : 1; unsigned char has_type : 1; unsigned char has_urgency : 1; unsigned char has_includeSource : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (readonly, nonatomic) BOOL hasFilter;
@property (retain, nonatomic) GEOPDComponentFilter *filter;
@property (nonatomic) BOOL hasIncludeSource;
@property (nonatomic) BOOL includeSource;
@property (nonatomic) BOOL hasUrgency;
@property (nonatomic) int urgency;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)urgencyAsString:(int)a0;
- (int)StringAsUrgency:(id)a0;
- (int)StringAsType:(id)a0;
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
- (id)initWithType:(int)a0 count:(unsigned int)a1;
- (id)typeAsString:(int)a0;

@end
