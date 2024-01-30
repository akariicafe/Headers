@class NSString, SiriCoreCorrectionPronunciation;

@interface SiriCoreUserCorrectionsProfileEntry : PBCodable <NSCopying> {
    struct { unsigned char alternativesCorrectionsCount : 1; unsigned char spellingCorrectionsCount : 1; unsigned char tap2editCorrectionsCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCorrectedText;
@property (retain, nonatomic) NSString *correctedText;
@property (readonly, nonatomic) BOOL hasPronunciationData;
@property (retain, nonatomic) SiriCoreCorrectionPronunciation *pronunciationData;
@property (nonatomic) BOOL hasSpellingCorrectionsCount;
@property (nonatomic) unsigned int spellingCorrectionsCount;
@property (nonatomic) BOOL hasTap2editCorrectionsCount;
@property (nonatomic) unsigned int tap2editCorrectionsCount;
@property (nonatomic) BOOL hasAlternativesCorrectionsCount;
@property (nonatomic) unsigned int alternativesCorrectionsCount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
