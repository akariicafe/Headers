@class NSString, NSMutableArray;

@interface SIRINLUINTERNALSubwordTokenChain : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSMutableArray *subwordTokens;

+ (Class)subwordTokensType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addSubwordTokens:(id)a0;
- (void)clearSubwordTokens;
- (id)subwordTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)subwordTokensCount;

@end
