@class NSMutableArray;

@interface HDCodableRoutinePredictedLocationsResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *predictedLocationsOfInterests;

+ (Class)predictedLocationsOfInterestType;

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
- (void)addPredictedLocationsOfInterest:(id)a0;
- (unsigned long long)predictedLocationsOfInterestsCount;
- (void)clearPredictedLocationsOfInterests;
- (id)predictedLocationsOfInterestAtIndex:(unsigned long long)a0;

@end
