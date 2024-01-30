@class NSString, SIRINLUEXTERNALUsoGraph;

@interface SIRINLUEXTERNALSpan : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _matcherNames;
    struct { unsigned char score : 1; unsigned char endTokenIndex : 1; unsigned char startTokenIndex : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL hasInput;
@property (retain, nonatomic) NSString *input;
@property (nonatomic) BOOL hasStartTokenIndex;
@property (nonatomic) unsigned int startTokenIndex;
@property (nonatomic) BOOL hasEndTokenIndex;
@property (nonatomic) unsigned int endTokenIndex;
@property (readonly, nonatomic) BOOL hasUsoGraph;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *usoGraph;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (readonly, nonatomic) unsigned long long matcherNamesCount;
@property (readonly, nonatomic) int *matcherNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addMatcherNames:(int)a0;
- (void)clearMatcherNames;
- (int)matcherNamesAtIndex:(unsigned long long)a0;
- (int)StringAsMatcherNames:(id)a0;
- (id)matcherNamesAsString:(int)a0;
- (void)setMatcherNames:(int *)a0 count:(unsigned long long)a1;

@end
