@class NSString;

@interface PPM2NamedEntitySourceLanguage : PBCodable <NSCopying> {
    struct { unsigned char algorithm : 1; unsigned char donationSource : 1; unsigned char languageCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDetectedLanguage;
@property (retain, nonatomic) NSString *detectedLanguage;
@property (readonly, nonatomic) BOOL hasSystemLanguage;
@property (retain, nonatomic) NSString *systemLanguage;
@property (nonatomic) BOOL hasLanguageCount;
@property (nonatomic) unsigned int languageCount;
@property (nonatomic) BOOL hasDonationSource;
@property (nonatomic) int donationSource;
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) int algorithm;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;

- (int)StringAsDonationSource:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsAlgorithm:(id)a0;
- (id)algorithmAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (id)donationSourceAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
