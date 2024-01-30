@class NSMutableArray, PBUnknownFields;

@interface GEONameInfoList : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_nameInfos;
}

@property (retain, nonatomic) NSMutableArray *nameInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)nameInfoType;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addNameInfo:(id)a0;
- (unsigned long long)nameInfosCount;
- (void)clearNameInfos;
- (id)nameInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
