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
+ (Class)competitionsType;
+ (Class)snapshotsType;

- (id)achievementsAtIndex:(unsigned long long)a0;
- (void)addWorkouts:(id)a0;
- (void)addAchievements:(id)a0;
- (unsigned long long)achievementsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearAchievements;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)clearWorkouts;
- (id)workoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)workoutsCount;
- (void)addCompetitions:(id)a0;
- (void)addSnapshots:(id)a0;
- (void)clearCompetitions;
- (void)clearSnapshots;
- (id)competitionsAtIndex:(unsigned long long)a0;
- (unsigned long long)competitionsCount;
- (id)snapshotsAtIndex:(unsigned long long)a0;
- (unsigned long long)snapshotsCount;

@end
