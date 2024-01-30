@class NSMutableArray;

@interface GEOLogMsgEventTelemetric : PBCodable <NSCopying> {
    NSMutableArray *_telemetricEntitys;
}

@property (retain, nonatomic) NSMutableArray *telemetricEntitys;

+ (Class)telemetricEntityType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addTelemetricEntity:(id)a0;
- (unsigned long long)telemetricEntitysCount;
- (void)clearTelemetricEntitys;
- (id)telemetricEntityAtIndex:(unsigned long long)a0;
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
