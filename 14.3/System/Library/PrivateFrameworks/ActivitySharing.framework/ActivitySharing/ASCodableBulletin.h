@class NSString, NSData;

@interface ASCodableBulletin : PBCodable <NSCopying> {
    struct { unsigned char competitionStage : 1; unsigned char timestamp : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasFriendUUID;
@property (retain, nonatomic) NSString *friendUUID;
@property (readonly, nonatomic) BOOL hasFriendListData;
@property (retain, nonatomic) NSData *friendListData;
@property (readonly, nonatomic) BOOL hasAchievementData;
@property (retain, nonatomic) NSData *achievementData;
@property (readonly, nonatomic) BOOL hasWorkoutData;
@property (retain, nonatomic) NSData *workoutData;
@property (readonly, nonatomic) BOOL hasSnapshotData;
@property (retain, nonatomic) NSData *snapshotData;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasCompetitionStage;
@property (nonatomic) long long competitionStage;

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

@end
