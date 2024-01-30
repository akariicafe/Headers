@class NSMutableArray, PREUMMessageMetadata, PREUMTrialExperiment;

@interface PREUMResponseList : PBCodable <NSCopying> {
    struct { unsigned char responseTimePerf : 1; unsigned char generationStatus : 1; unsigned char isCached : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExperiment;
@property (retain, nonatomic) PREUMTrialExperiment *experiment;
@property (readonly, nonatomic) BOOL hasMsgMetadata;
@property (retain, nonatomic) PREUMMessageMetadata *msgMetadata;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL hasIsCached;
@property (nonatomic) BOOL isCached;
@property (nonatomic) BOOL hasResponseTimePerf;
@property (nonatomic) unsigned long long responseTimePerf;
@property (nonatomic) BOOL hasGenerationStatus;
@property (nonatomic) int generationStatus;

+ (Class)itemsType;

- (void)addItems:(id)a0;
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
- (unsigned long long)itemsCount;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)a0;
- (id)generationStatusAsString:(int)a0;
- (int)StringAsGenerationStatus:(id)a0;

@end
