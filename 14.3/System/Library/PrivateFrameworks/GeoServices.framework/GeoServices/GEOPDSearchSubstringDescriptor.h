@class NSMutableArray, PBUnknownFields;

@interface GEOPDSearchSubstringDescriptor : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spanDatas;
    int _beginIndex;
    int _endIndex;
    int _stringType;
}

@property (nonatomic) int stringType;
@property (nonatomic) int beginIndex;
@property (nonatomic) int endIndex;
@property (retain, nonatomic) NSMutableArray *spanDatas;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)spanDataType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)addSpanData:(id)a0;
- (unsigned long long)spanDatasCount;
- (void)clearSpanDatas;
- (id)spanDataAtIndex:(unsigned long long)a0;
- (id)stringTypeAsString:(int)a0;
- (int)StringAsStringType:(id)a0;
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
