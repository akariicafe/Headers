@class NSString, NSMutableArray;

@interface PMQueryNode : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _keys;
    struct { unsigned char doubleValue : 1; unsigned char intValue : 1; unsigned char floatValue : 1; unsigned char mergeOp : 1; unsigned char op : 1; unsigned char boolValue : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long keysCount;
@property (readonly, nonatomic) int *keys;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasIntValue;
@property (nonatomic) long long intValue;
@property (nonatomic) BOOL hasFloatValue;
@property (nonatomic) float floatValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) BOOL hasOp;
@property (nonatomic) int op;
@property (nonatomic) BOOL hasMergeOp;
@property (nonatomic) int mergeOp;
@property (retain, nonatomic) NSMutableArray *childs;

+ (Class)childType;

- (int)keyAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addChild:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addKey:(int)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)clearKeys;
- (id)dictionaryRepresentation;
- (id)childAtIndex:(unsigned long long)a0;
- (unsigned long long)childsCount;
- (void)clearChilds;
- (void)setKeys:(int *)a0 count:(unsigned long long)a1;
- (id)keysAsString:(int)a0;
- (int)StringAsKeys:(id)a0;
- (id)opAsString:(int)a0;
- (int)StringAsOp:(id)a0;
- (id)mergeOpAsString:(int)a0;
- (int)StringAsMergeOp:(id)a0;

@end
