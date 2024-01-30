@class NSString;

@interface PREAMEngagedResponse : PBCodable <NSCopying> {
    struct { unsigned char ageGroup : 1; unsigned char generationStatus : 1; unsigned char inputMethod : 1; unsigned char modelId : 1; unsigned char numberOfCustomResponses : 1; unsigned char numberOfResponsesGenerated : 1; unsigned char position : 1; unsigned char replyTextId : 1; unsigned char responseClassId : 1; unsigned char hasQuestionMark : 1; unsigned char isApricotDevice : 1; unsigned char isCustomResponse : 1; } _has;
}

@property (nonatomic) BOOL hasModelId;
@property (nonatomic) unsigned int modelId;
@property (nonatomic) BOOL hasResponseClassId;
@property (nonatomic) unsigned int responseClassId;
@property (nonatomic) BOOL hasReplyTextId;
@property (nonatomic) unsigned int replyTextId;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) unsigned int position;
@property (nonatomic) BOOL hasInputMethod;
@property (nonatomic) int inputMethod;
@property (nonatomic) BOOL hasGenerationStatus;
@property (nonatomic) int generationStatus;
@property (nonatomic) BOOL hasNumberOfResponsesGenerated;
@property (nonatomic) unsigned int numberOfResponsesGenerated;
@property (nonatomic) BOOL hasNumberOfCustomResponses;
@property (nonatomic) unsigned int numberOfCustomResponses;
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) BOOL hasTreatmentModelName;
@property (retain, nonatomic) NSString *treatmentModelName;
@property (readonly, nonatomic) BOOL hasHostProcess;
@property (retain, nonatomic) NSString *hostProcess;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) BOOL hasLang;
@property (retain, nonatomic) NSString *lang;
@property (nonatomic) BOOL hasIsApricotDevice;
@property (nonatomic) BOOL isApricotDevice;
@property (nonatomic) BOOL hasAgeGroup;
@property (nonatomic) int ageGroup;
@property (nonatomic) BOOL hasHasQuestionMark;
@property (nonatomic) BOOL hasQuestionMark;
@property (nonatomic) BOOL hasIsCustomResponse;
@property (nonatomic) BOOL isCustomResponse;

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
- (id)ageGroupAsString:(int)a0;
- (int)StringAsAgeGroup:(id)a0;
- (id)inputMethodAsString:(int)a0;
- (int)StringAsInputMethod:(id)a0;
- (id)generationStatusAsString:(int)a0;
- (int)StringAsGenerationStatus:(id)a0;

@end
