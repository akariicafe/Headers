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

+ (Class)andType;
+ (Class)orType;

- (id)andAtIndex:(unsigned long long)a0;
- (void)clearOrs;
- (BOOL)performOrMatch:(id)a0 error:(id *)a1;
- (unsigned long long)andsCount;
- (unsigned long long)orsCount;
- (BOOL)readFrom:(id)a0;
- (void)addOr:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (BOOL)performAndMatch:(id)a0 error:(id *)a1;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addAnd:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearAnds;
- (id)orAtIndex:(unsigned long long)a0;
- (BOOL)matches:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (BOOL)invertMatch:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;

@end
