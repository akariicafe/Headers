@class SIRINLUINTERNALCCQROverrideTemplate, SIRINLUEXTERNALUserParse, SIRINLUINTERNALLVCOverrideValue;

@interface SIRINLUINTERNALOverrideValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCcqrOverrideTemplate;
@property (retain, nonatomic) SIRINLUINTERNALCCQROverrideTemplate *ccqrOverrideTemplate;
@property (readonly, nonatomic) BOOL hasUserParse;
@property (retain, nonatomic) SIRINLUEXTERNALUserParse *userParse;
@property (readonly, nonatomic) BOOL hasLvcOverrideValue;
@property (retain, nonatomic) SIRINLUINTERNALLVCOverrideValue *lvcOverrideValue;

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

@end
