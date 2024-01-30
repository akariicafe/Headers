@class NSMutableArray, PBUnknownFields;

@interface GEOPDExternalAction : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_externalActionDetails;
    int _componentType;
    struct { unsigned char has_componentType : 1; } _flags;
}

@property (nonatomic) BOOL hasComponentType;
@property (nonatomic) int componentType;
@property (retain, nonatomic) NSMutableArray *externalActionDetails;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)externalActionDetailType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addExternalActionDetail:(id)a0;
- (unsigned long long)externalActionDetailsCount;
- (void)clearExternalActionDetails;
- (id)externalActionDetailAtIndex:(unsigned long long)a0;
- (id)componentTypeAsString:(int)a0;
- (int)StringAsComponentType:(id)a0;
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
