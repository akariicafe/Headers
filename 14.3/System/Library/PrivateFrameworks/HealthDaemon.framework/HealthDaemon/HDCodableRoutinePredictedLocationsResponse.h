@class NSMutableArray;

@interface HDCodableRoutinePredictedLocationsResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *predictedLocationsOfInterests;

+ (Class)predictedLocationsOfInterestType;

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
- (void)addPredictedLocationsOfInterest:(id)a0;
- (unsigned long long)predictedLocationsOfInterestsCount;
- (void)clearPredictedLocationsOfInterests;
- (id)predictedLocationsOfInterestAtIndex:(unsigned long long)a0;

@end
