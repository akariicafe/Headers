@class NSMutableArray;

@interface ATXPBSuggestionLayoutList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *layouts;

+ (Class)layoutType;

- (void)clearLayouts;
- (void)addLayout:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)layoutsCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)layoutAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
