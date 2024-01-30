@class NSString, NSMutableArray, SGMIMetricsInferenceAndGroundTruth;

@interface SGMIMetricsMailIntelligenceForMessage : PBCodable <NSCopying> {
    struct { unsigned char hoursSinceReference : 1; unsigned char nbCharactersInMailSubject : 1; unsigned char nbTokensInMailSubject : 1; unsigned char previousInteractionFromUserOnConversationInMinutes : 1; unsigned char previousInteractionOnConversationInMinutes : 1; unsigned char senderConnectionScore : 1; unsigned char timeDifferenceFromReceptionToSaliencyInferenceInSeconds : 1; } _has;
}

@property (nonatomic) BOOL hasHoursSinceReference;
@property (nonatomic) unsigned int hoursSinceReference;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) BOOL hasLang;
@property (retain, nonatomic) NSString *lang;
@property (nonatomic) BOOL hasTimeDifferenceFromReceptionToSaliencyInferenceInSeconds;
@property (nonatomic) unsigned int timeDifferenceFromReceptionToSaliencyInferenceInSeconds;
@property (nonatomic) BOOL hasSenderConnectionScore;
@property (nonatomic) float senderConnectionScore;
@property (retain, nonatomic) NSMutableArray *mailAttachmentHistograms;
@property (nonatomic) BOOL hasNbCharactersInMailSubject;
@property (nonatomic) unsigned int nbCharactersInMailSubject;
@property (nonatomic) BOOL hasNbTokensInMailSubject;
@property (nonatomic) unsigned int nbTokensInMailSubject;
@property (nonatomic) BOOL hasPreviousInteractionOnConversationInMinutes;
@property (nonatomic) unsigned int previousInteractionOnConversationInMinutes;
@property (nonatomic) BOOL hasPreviousInteractionFromUserOnConversationInMinutes;
@property (nonatomic) unsigned int previousInteractionFromUserOnConversationInMinutes;
@property (readonly, nonatomic) BOOL hasActive;
@property (retain, nonatomic) SGMIMetricsInferenceAndGroundTruth *active;
@property (readonly, nonatomic) BOOL hasBackground;
@property (retain, nonatomic) SGMIMetricsInferenceAndGroundTruth *background;

+ (Class)mailAttachmentHistogramType;

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
- (void)clearMailAttachmentHistograms;
- (void)addMailAttachmentHistogram:(id)a0;
- (unsigned long long)mailAttachmentHistogramsCount;
- (id)mailAttachmentHistogramAtIndex:(unsigned long long)a0;

@end
