@class SIRINLUEXTERNALParser, NSMutableArray;

@interface SIRINLUEXTERNALLanguageVariantResult : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *multilingualVariants;
@property (readonly, nonatomic) BOOL hasParser;
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser;

+ (Class)multilingualVariantType;

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
- (void)clearMultilingualVariants;
- (unsigned long long)multilingualVariantsCount;
- (void)addMultilingualVariant:(id)a0;
- (id)multilingualVariantAtIndex:(unsigned long long)a0;

@end
