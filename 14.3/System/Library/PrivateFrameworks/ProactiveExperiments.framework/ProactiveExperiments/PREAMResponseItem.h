@class NSString;

@interface PREAMResponseItem : PBCodable <NSCopying> {
    struct { unsigned char ageGroup : 1; unsigned char modelId : 1; unsigned char position : 1; unsigned char replyTextId : 1; unsigned char responseClassId : 1; unsigned char isApricotDevice : 1; unsigned char isCustomResponse : 1; } _has;
}

@property (nonatomic) BOOL hasModelId;
@property (nonatomic) unsigned int modelId;
@property (nonatomic) BOOL hasResponseClassId;
@property (nonatomic) unsigned int responseClassId;
@property (nonatomic) BOOL hasReplyTextId;
@property (nonatomic) unsigned int replyTextId;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) unsigned int position;
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
@property (nonatomic) BOOL hasIsCustomResponse;
@property (nonatomic) BOOL isCustomResponse;

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
- (id)ageGroupAsString:(int)a0;
- (int)StringAsAgeGroup:(id)a0;

@end
