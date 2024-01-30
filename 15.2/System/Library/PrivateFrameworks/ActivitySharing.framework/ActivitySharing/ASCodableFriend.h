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
