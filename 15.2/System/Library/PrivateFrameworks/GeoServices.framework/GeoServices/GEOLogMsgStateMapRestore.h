@class NSMutableArray;

@interface GEOLogMsgStateMapRestore : PBCodable <NSCopying> {
    NSMutableArray *_targetLayouts;
}

@property (retain, nonatomic) NSMutableArray *targetLayouts;

+ (BOOL)isValid:(id)a0;
+ (Class)targetLayoutType;

- (void)readAll:(BOOL)a0;
- (void)addTargetLayout:(id)a0;
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
- (unsigned long long)hash;
- (unsigned long long)targetLayoutsCount;
- (void)clearTargetLayouts;
- (id)targetLayoutAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
