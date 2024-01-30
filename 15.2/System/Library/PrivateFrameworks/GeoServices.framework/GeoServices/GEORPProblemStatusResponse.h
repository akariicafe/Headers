@class NSMutableArray;

@interface GEORPProblemStatusResponse : PBCodable <NSCopying> {
    NSMutableArray *_problemStatus;
    int _statusCode;
    struct { unsigned char has_statusCode : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *problemStatus;

+ (BOOL)isValid:(id)a0;
+ (Class)problemStatusType;

- (void)readAll:(BOOL)a0;
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
- (void)addProblemStatus:(id)a0;
- (unsigned long long)problemStatusCount;
- (void)clearProblemStatus;
- (id)problemStatusAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)statusCodeAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
