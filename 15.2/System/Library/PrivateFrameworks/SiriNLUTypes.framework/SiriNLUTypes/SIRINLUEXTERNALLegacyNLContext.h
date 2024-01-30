@class NSString, NSMutableArray;

@interface SIRINLUEXTERNALLegacyNLContext : PBCodable <NSCopying> {
    struct { unsigned char dictationPrompt : 1; unsigned char listenAfterSpeaking : 1; unsigned char strictPrompt : 1; } _has;
}

@property (nonatomic) BOOL hasDictationPrompt;
@property (nonatomic) BOOL dictationPrompt;
@property (nonatomic) BOOL hasStrictPrompt;
@property (nonatomic) BOOL strictPrompt;
@property (readonly, nonatomic) BOOL hasPreviousDomainName;
@property (retain, nonatomic) NSString *previousDomainName;
@property (nonatomic) BOOL hasListenAfterSpeaking;
@property (nonatomic) BOOL listenAfterSpeaking;
@property (retain, nonatomic) NSMutableArray *renderedTexts;

+ (Class)renderedTextsType;

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
- (void)addRenderedTexts:(id)a0;
- (void)clearRenderedTexts;
- (unsigned long long)renderedTextsCount;
- (id)renderedTextsAtIndex:(unsigned long long)a0;

@end
