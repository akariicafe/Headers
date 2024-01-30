@class NSString, NSMutableArray;

@interface SIRINLUINTERNALAdjacentSpans : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCaptureGroupName;
@property (retain, nonatomic) NSString *captureGroupName;
@property (retain, nonatomic) NSMutableArray *spans;

+ (Class)spansType;

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
- (void)clearSpans;
- (unsigned long long)spansCount;
- (void)addSpans:(id)a0;
- (id)spansAtIndex:(unsigned long long)a0;

@end
