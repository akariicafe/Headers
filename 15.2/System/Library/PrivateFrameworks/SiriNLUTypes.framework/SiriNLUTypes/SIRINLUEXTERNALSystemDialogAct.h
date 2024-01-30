@class SIRINLUEXTERNALUUID, SIRINLUEXTERNALSystemReportedFailure, SIRINLUEXTERNALSystemPrompted, SIRICOMMONStringValue, SIRINLUEXTERNALSystemGaveOptions, SIRINLUEXTERNALSystemOffered, SIRINLUEXTERNALSystemInformed, SIRINLUEXTERNALSystemReportedSuccess;

@interface SIRINLUEXTERNALSystemDialogAct : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdA;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *idA;
@property (readonly, nonatomic) BOOL hasPrompted;
@property (retain, nonatomic) SIRINLUEXTERNALSystemPrompted *prompted;
@property (readonly, nonatomic) BOOL hasOffered;
@property (retain, nonatomic) SIRINLUEXTERNALSystemOffered *offered;
@property (readonly, nonatomic) BOOL hasGaveOptions;
@property (retain, nonatomic) SIRINLUEXTERNALSystemGaveOptions *gaveOptions;
@property (readonly, nonatomic) BOOL hasInformed;
@property (retain, nonatomic) SIRINLUEXTERNALSystemInformed *informed;
@property (readonly, nonatomic) BOOL hasReportedSuccess;
@property (retain, nonatomic) SIRINLUEXTERNALSystemReportedSuccess *reportedSuccess;
@property (readonly, nonatomic) BOOL hasReportedFailure;
@property (retain, nonatomic) SIRINLUEXTERNALSystemReportedFailure *reportedFailure;
@property (readonly, nonatomic) BOOL hasRenderedText;
@property (retain, nonatomic) SIRICOMMONStringValue *renderedText;

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

@end
