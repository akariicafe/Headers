@class SBCPlaybackPositionDomain, NSString;

@interface SBCPlaybackPositionEntity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain;
@property (readonly, nonatomic) NSString *ubiquitousIdentifier;
@property (readonly, nonatomic) long long foreignDatabaseEntityID;
@property (nonatomic) double bookmarkTimestamp;
@property (nonatomic) double bookmarkTime;
@property (nonatomic) unsigned long long userPlayCount;
@property (nonatomic) BOOL hasBeenPlayed;

+ (id)ubiquitousIdentifierWithUniqueStoreID:(long long)a0;
+ (id)ubiquitousIdentifierWithItemTitle:(id)a0 albumName:(id)a1 itemArtistName:(id)a2;
+ (id)ubiquitousIdentifierWithPodcastFeedURL:(id)a0 feedGUID:(id)a1;
+ (id)ubiquitousIdentifierWithiTunesUFeedURL:(id)a0 feedGUID:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)hasBeenPlayedModified;
- (BOOL)userPlayCountModified;
- (BOOL)bookmarkTimeModified;
- (BOOL)bookmarkTimestampModified;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlaybackPositionDomain:(id)a0 ubiquitousIdentifier:(id)a1 foreignDatabaseEntityID:(long long)a2;
- (id)SBKUniversalPlaybackPositionMetadata;
- (id)copyWithValuesFromSBKUniversalPlaybackPositionMetadata:(id)a0;

@end
