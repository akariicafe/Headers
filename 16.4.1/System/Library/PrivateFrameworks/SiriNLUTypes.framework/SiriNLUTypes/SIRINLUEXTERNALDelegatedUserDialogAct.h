@class NSString, SIRINLUEXTERNALReferenceContext, SIRICOMMONStringValue, SIRINLUEXTERNALRewriteMessage, NSMutableArray;

@interface SIRINLUEXTERNALDelegatedUserDialogAct : PBCodable <NSCopying> {
    struct { unsigned char asrHypothesisIndex : 1; } _has;
}

@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (nonatomic) unsigned int asrHypothesisIndex;
@property (readonly, nonatomic) BOOL hasRewrittenUtterance;
@property (retain, nonatomic) SIRICOMMONStringValue *rewrittenUtterance;
@property (readonly, nonatomic) BOOL hasExternalParserId;
@property (retain, nonatomic) NSString *externalParserId;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (readonly, nonatomic) BOOL hasRewrite;
@property (retain, nonatomic) SIRINLUEXTERNALRewriteMessage *rewrite;
@property (readonly, nonatomic) BOOL hasReferenceContext;
@property (retain, nonatomic) SIRINLUEXTERNALReferenceContext *referenceContext;

+ (Class)matchingSpansType;

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
- (void)addMatchingSpans:(id)a0;
- (void)clearMatchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)matchingSpansCount;

@end
