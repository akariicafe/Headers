@class NSMutableArray;

@interface GEOSpatialLookupBatchResponse : PBCodable <NSCopying> {
    NSMutableArray *_responses;
    int _statusCode;
    struct { unsigned char has_statusCode : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *responses;

+ (BOOL)isValid:(id)a0;
+ (Class)responseType;

- (void)clearResponses;
- (void)readAll:(BOOL)a0;
- (void)addResponse:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)StringAsStatusCode:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)responsesCount;
- (unsigned long long)hash;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)responseAtIndex:(unsigned long long)a0;
- (id)statusCodeAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
