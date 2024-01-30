@class NSMutableArray;

@interface HMUserActionPredictionDuetPredictionStore : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *predictions;

+ (Class)predictionType;

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
- (void)clearPredictions;
- (void)addPrediction:(id)a0;
- (unsigned long long)predictionsCount;
- (id)predictionAtIndex:(unsigned long long)a0;

@end
