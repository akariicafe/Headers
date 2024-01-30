@class NSMutableArray;

@interface SIRINLUINTERNALSPANMATCHSpanMatchResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *matchingSpans;

+ (Class)matchingSpansType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addMatchingSpans:(id)a0;
- (void)clearMatchingSpans;
- (unsigned long long)matchingSpansCount;
- (id)matchingSpansAtIndex:(unsigned long long)a0;

@end
