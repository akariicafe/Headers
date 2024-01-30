@class ASCodableContact, NSMutableArray;

@interface ASCodableFriend : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContact;
@property (retain, nonatomic) ASCodableContact *contact;
@property (retain, nonatomic) NSMutableArray *snapshots;
@property (retain, nonatomic) NSMutableArray *workouts;
@property (retain, nonatomic) NSMutableArray *achievements;
@property (retain, nonatomic) NSMutableArray *competitions;

+ (Class)workoutsType;
+ (Class)achievementsType;
+ (Class)snapshotsType;
+ (Class)competitionsType;

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
- (void)addWorkouts:(id)a0;
- (unsigned long long)workoutsCount;
- (void)clearWorkouts;
- (id)workoutsAtIndex:(unsigned long long)a0;
- (void)addAchievements:(id)a0;
- (unsigned long long)achievementsCount;
- (void)clearAchievements;
- (id)achievementsAtIndex:(unsigned long long)a0;
- (void)addSnapshots:(id)a0;
- (void)addCompetitions:(id)a0;
- (unsigned long long)snapshotsCount;
- (void)clearSnapshots;
- (id)snapshotsAtIndex:(unsigned long long)a0;
- (unsigned long long)competitionsCount;
- (void)clearCompetitions;
- (id)competitionsAtIndex:(unsigned long long)a0;

@end
