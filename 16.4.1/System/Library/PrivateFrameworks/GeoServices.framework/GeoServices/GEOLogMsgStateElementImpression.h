@class GEOImpressionObjectId, NSString, GEOElementDetails, PBDataReader;

@interface GEOLogMsgStateElementImpression : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOElementDetails *_element;
    unsigned long long _impressNonvisibleTsInMs;
    unsigned long long _impressVisibleTsInMs;
    GEOImpressionObjectId *_impressionObjectId;
    NSString *_query;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _elementSource;
    int _impressEvent;
    struct { unsigned char has_impressNonvisibleTsInMs : 1; unsigned char has_impressVisibleTsInMs : 1; unsigned char has_elementSource : 1; unsigned char has_impressEvent : 1; unsigned char read_element : 1; unsigned char read_impressionObjectId : 1; unsigned char read_query : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasElement;
@property (retain, nonatomic) GEOElementDetails *element;
@property (readonly, nonatomic) BOOL hasImpressionObjectId;
@property (retain, nonatomic) GEOImpressionObjectId *impressionObjectId;
@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) BOOL hasImpressEvent;
@property (nonatomic) int impressEvent;
@property (nonatomic) BOOL hasImpressVisibleTsInMs;
@property (nonatomic) unsigned long long impressVisibleTsInMs;
@property (nonatomic) BOOL hasImpressNonvisibleTsInMs;
@property (nonatomic) unsigned long long impressNonvisibleTsInMs;
@property (nonatomic) BOOL hasElementSource;
@property (nonatomic) int elementSource;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsElementSource:(id)a0;
- (int)StringAsImpressEvent:(id)a0;
- (id)elementSourceAsString:(int)a0;
- (id)impressEventAsString:(int)a0;

@end
