@class NSMutableArray;

@interface HKCodableCondensedWorkoutCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *workouts;

+ (Class)workoutsType;

- (unsigned long long)workoutsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearWorkouts;
- (void)addWorkouts:(id)a0;
- (id)workoutsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
