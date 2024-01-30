@class NSMutableArray;

@interface GEOCacheMiss : PBCodable <NSCopying> {
    NSMutableArray *_errors;
    unsigned int _bytes;
    unsigned int _count;
    unsigned int _httpStatus;
    int _missType;
    int _requestorType;
    struct { unsigned char has_bytes : 1; unsigned char has_count : 1; unsigned char has_httpStatus : 1; unsigned char has_missType : 1; unsigned char has_requestorType : 1; } _flags;
}

@property (nonatomic) BOOL hasRequestorType;
@property (nonatomic) int requestorType;
@property (nonatomic) BOOL hasMissType;
@property (nonatomic) int missType;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasBytes;
@property (nonatomic) unsigned int bytes;
@property (retain, nonatomic) NSMutableArray *errors;
@property (nonatomic) BOOL hasHttpStatus;
@property (nonatomic) unsigned int httpStatus;

+ (Class)errorsType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (unsigned long long)errorsCount;
- (id)requestorTypeAsString:(int)a0;
- (int)StringAsRequestorType:(id)a0;
- (void)addErrors:(id)a0;
- (id)errorsAtIndex:(unsigned long long)a0;
- (id)missTypeAsString:(int)a0;
- (int)StringAsMissType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearErrors;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
