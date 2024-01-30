@class TPPBDictionaryMatchingRuleFieldExists, NSMutableArray, TPPBDictionaryMatchingRuleFieldRegexMatch;

@interface TPPBDictionaryMatchingRule : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *ands;
@property (retain, nonatomic) NSMutableArray *ors;
@property (readonly, nonatomic) BOOL hasNot;
@property (retain, nonatomic) TPPBDictionaryMatchingRule *not;
@property (readonly, nonatomic) BOOL hasMatch;
@property (retain, nonatomic) TPPBDictionaryMatchingRuleFieldRegexMatch *match;
@property (readonly, nonatomic) BOOL hasExists;
@property (retain, nonatomic) TPPBDictionaryMatchingRuleFieldExists *exists;

+ (Class)orType;
+ (Class)andType;

- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)addOr:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addAnd:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearAnds;
- (unsigned long long)andsCount;
- (id)andAtIndex:(unsigned long long)a0;
- (void)clearOrs;
- (unsigned long long)orsCount;
- (id)orAtIndex:(unsigned long long)a0;
- (BOOL)matches:(id)a0 error:(id *)a1;
- (BOOL)performOrMatch:(id)a0 error:(id *)a1;
- (BOOL)performAndMatch:(id)a0 error:(id *)a1;
- (BOOL)invertMatch:(id)a0 error:(id *)a1;

@end
