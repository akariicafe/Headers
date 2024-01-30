@class NSMutableArray;

@interface ATXPBFaceGallerySection : PBCodable <NSCopying> {
    struct { unsigned char semanticType : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL hasSemanticType;
@property (nonatomic) int semanticType;

+ (Class)itemsType;

- (unsigned long long)itemsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)itemsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearItems;
- (id)description;
- (void).cxx_destruct;
- (id)typeAsString:(int)a0;
- (void)addItems:(id)a0;
- (int)StringAsSemanticType:(id)a0;
- (id)semanticTypeAsString:(int)a0;

@end
