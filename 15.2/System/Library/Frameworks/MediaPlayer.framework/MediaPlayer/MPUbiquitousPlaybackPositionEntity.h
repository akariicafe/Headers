@class NSString;

@interface MPUbiquitousPlaybackPositionEntity : NSObject

@property (readonly, copy, nonatomic) NSString *ubiquitousIdentifier;
@property (nonatomic) double bookmarkTimestamp;
@property (nonatomic) double bookmarkTime;
@property (nonatomic) unsigned long long userPlayCount;
@property (nonatomic) BOOL hasBeenPlayed;

+ (id)ubiquitousIdentifierWithStoreAdamID:(long long)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUbiquitousIdentifier:(id)a0;
- (BOOL)hasBeenPlayedModified;
- (BOOL)userPlayCountModified;
- (BOOL)bookmarkTimeModified;
- (BOOL)bookmarkTimestampModified;

@end
