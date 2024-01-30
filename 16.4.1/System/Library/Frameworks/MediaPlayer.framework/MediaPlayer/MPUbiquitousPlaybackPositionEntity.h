@class NSString;

@interface MPUbiquitousPlaybackPositionEntity : NSObject

@property (readonly, copy, nonatomic) NSString *ubiquitousIdentifier;
@property (nonatomic) double bookmarkTimestamp;
@property (nonatomic) double bookmarkTime;
@property (nonatomic) unsigned long long userPlayCount;
@property (nonatomic) BOOL hasBeenPlayed;

+ (id)ubiquitousIdentifierWithStoreAdamID:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)bookmarkTimeModified;
- (BOOL)bookmarkTimestampModified;
- (BOOL)hasBeenPlayedModified;
- (id)initWithUbiquitousIdentifier:(id)a0;
- (BOOL)userPlayCountModified;

@end
