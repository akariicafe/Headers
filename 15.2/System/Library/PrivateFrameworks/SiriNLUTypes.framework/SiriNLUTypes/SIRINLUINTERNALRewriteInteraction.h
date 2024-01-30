@class NSString, NSMutableArray;

@interface SIRINLUINTERNALRewriteInteraction : PBCodable <NSCopying> {
    struct { unsigned char startTimestamp : 1; unsigned char tap2edit : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *originalUtterances;
@property (retain, nonatomic) NSMutableArray *siriResponses;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) BOOL hasTap2edit;
@property (nonatomic) BOOL tap2edit;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) unsigned long long startTimestamp;

+ (Class)originalUtterancesType;
+ (Class)siriResponseType;

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
- (void)addSiriResponse:(id)a0;
- (void)addOriginalUtterances:(id)a0;
- (unsigned long long)originalUtterancesCount;
- (void)clearOriginalUtterances;
- (id)originalUtterancesAtIndex:(unsigned long long)a0;
- (unsigned long long)siriResponsesCount;
- (void)clearSiriResponses;
- (id)siriResponseAtIndex:(unsigned long long)a0;

@end
