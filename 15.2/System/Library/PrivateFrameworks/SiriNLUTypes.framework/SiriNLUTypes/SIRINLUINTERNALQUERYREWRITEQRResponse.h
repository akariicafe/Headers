@class SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUINTERNALQUERYREWRITEQRResponse : PBCodable <NSCopying> {
    struct { unsigned char repetitionType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (retain, nonatomic) NSMutableArray *qrHypotheses;
@property (nonatomic) BOOL hasRepetitionType;
@property (nonatomic) int repetitionType;
@property (retain, nonatomic) NSMutableArray *rewriteHypotheses;

+ (Class)qrHypothesesType;
+ (Class)rewriteHypothesesType;

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
- (unsigned long long)rewriteHypothesesCount;
- (id)repetitionTypeAsString:(int)a0;
- (int)StringAsRepetitionType:(id)a0;
- (void)addQrHypotheses:(id)a0;
- (void)addRewriteHypotheses:(id)a0;
- (unsigned long long)qrHypothesesCount;
- (void)clearQrHypotheses;
- (id)qrHypothesesAtIndex:(unsigned long long)a0;
- (void)clearRewriteHypotheses;
- (id)rewriteHypothesesAtIndex:(unsigned long long)a0;

@end
