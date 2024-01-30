@class NSMutableArray, PBUnknownFields;

@interface GEONameInfoList : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_nameInfos;
}

@property (retain, nonatomic) NSMutableArray *nameInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)nameInfoType;

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
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (void)addNameInfo:(id)a0;
- (void)clearNameInfos;
- (id)nameInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)nameInfosCount;

@end
