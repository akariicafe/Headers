@class MTPlaylist, NSString, MTPodcast, MTEpisode;

@interface MTSyncInfo : NSManagedObject

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) long long syncID;
@property (nonatomic) int entityType;
@property (nonatomic) int syncability;
@property (nonatomic) long long insertionRevision;
@property (nonatomic) long long updateRevision;
@property (nonatomic) long long artworkUpdateRevision;
@property (weak, nonatomic) MTEpisode *episode;
@property (weak, nonatomic) MTPlaylist *playlist;
@property (weak, nonatomic) MTPodcast *podcast;

+ (id)predicateForHasNoInverseRelation;
+ (id)predicateForIsCurrentlySyncable:(BOOL)a0;

@end
