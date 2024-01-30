@class NSMutableArray, PREUMMessageMetadata, PREUMTrialExperiment;

@interface PREUMEngagedResponseList : PBCodable <NSCopying> {
    struct { unsigned char timeToTap : 1; unsigned char engagedItem : 1; unsigned char generationStatus : 1; unsigned char inputMethod : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExperiment;
@property (retain, nonatomic) PREUMTrialExperiment *experiment;
@property (readonly, nonatomic) BOOL hasMsgMetadata;
@property (retain, nonatomic) PREUMMessageMetadata *msgMetadata;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL hasEngagedItem;
@property (nonatomic) unsigned int engagedItem;
@property (nonatomic) BOOL hasTimeToTap;
@property (nonatomic) unsigned long long timeToTap;
@property (nonatomic) BOOL hasInputMethod;
@property (nonatomic) int inputMethod;
@property (nonatomic) BOOL hasGenerationStatus;
@property (nonatomic) int generationStatus;

+ (Class)itemsType;

- (id)itemsAtIndex:(unsigned long long)a0;
- (unsigned long long)itemsCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addItems:(id)a0;
- (void)clearItems;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)inputMethodAsString:(int)a0;
- (int)StringAsInputMethod:(id)a0;
- (id)generationStatusAsString:(int)a0;
- (int)StringAsGenerationStatus:(id)a0;

@end
