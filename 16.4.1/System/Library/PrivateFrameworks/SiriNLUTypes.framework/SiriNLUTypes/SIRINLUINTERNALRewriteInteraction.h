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
- (void)addOriginalUtterances:(id)a0;
- (void)addSiriResponse:(id)a0;
- (void)clearOriginalUtterances;
- (void)clearSiriResponses;
- (id)originalUtterancesAtIndex:(unsigned long long)a0;
- (unsigned long long)originalUtterancesCount;
- (id)siriResponseAtIndex:(unsigned long long)a0;
- (unsigned long long)siriResponsesCount;

@end
