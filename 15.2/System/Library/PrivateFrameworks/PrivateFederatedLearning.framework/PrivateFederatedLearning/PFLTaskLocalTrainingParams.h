@class NSMutableArray;

@interface PFLTaskLocalTrainingParams : PBCodable <NSCopying> {
    struct { unsigned char epochs : 1; unsigned char learningRate : 1; unsigned char validationSplit : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *orderedTrainableLayers;
@property (nonatomic) BOOL hasValidationSplit;
@property (nonatomic) double validationSplit;
@property (nonatomic) BOOL hasLearningRate;
@property (nonatomic) double learningRate;
@property (nonatomic) BOOL hasEpochs;
@property (nonatomic) long long epochs;

+ (Class)orderedTrainableLayersType;

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
- (void)addOrderedTrainableLayers:(id)a0;
- (unsigned long long)orderedTrainableLayersCount;
- (void)clearOrderedTrainableLayers;
- (id)orderedTrainableLayersAtIndex:(unsigned long long)a0;

@end
