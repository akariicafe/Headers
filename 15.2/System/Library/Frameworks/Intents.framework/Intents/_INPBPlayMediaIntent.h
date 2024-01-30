@class _INPBPrivatePlayMediaIntentData, _INPBTimestamp, NSArray, _INPBIntentMetadata, NSString, _INPBString, _INPBMediaItemValue, _INPBMediaSearch;

@interface _INPBPlayMediaIntent : PBCodable <_INPBPlayMediaIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char parsecCategory : 1; unsigned char playShuffled : 1; unsigned char playbackQueueLocation : 1; unsigned char playbackRepeatMode : 1; unsigned char playbackSpeed : 1; unsigned char resumePlayback : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *alternativeResults;
@property (readonly, nonatomic) unsigned long long alternativeResultsCount;
@property (copy, nonatomic) NSArray *audioSearchResults;
@property (readonly, nonatomic) unsigned long long audioSearchResultsCount;
@property (retain, nonatomic) _INPBString *audiobookAuthor;
@property (readonly, nonatomic) BOOL hasAudiobookAuthor;
@property (retain, nonatomic) _INPBString *audiobookTitle;
@property (readonly, nonatomic) BOOL hasAudiobookTitle;
@property (copy, nonatomic) NSArray *buckets;
@property (readonly, nonatomic) unsigned long long bucketsCount;
@property (retain, nonatomic) _INPBTimestamp *expirationDate;
@property (readonly, nonatomic) BOOL hasExpirationDate;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (readonly, nonatomic) unsigned long long hashedRouteUIDsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBMediaItemValue *mediaContainer;
@property (readonly, nonatomic) BOOL hasMediaContainer;
@property (copy, nonatomic) NSArray *mediaItems;
@property (readonly, nonatomic) unsigned long long mediaItemsCount;
@property (retain, nonatomic) _INPBMediaSearch *mediaSearch;
@property (readonly, nonatomic) BOOL hasMediaSearch;
@property (retain, nonatomic) _INPBString *mediaUserContext;
@property (readonly, nonatomic) BOOL hasMediaUserContext;
@property (retain, nonatomic) _INPBString *musicArtistName;
@property (readonly, nonatomic) BOOL hasMusicArtistName;
@property (nonatomic) int parsecCategory;
@property (nonatomic) BOOL hasParsecCategory;
@property (nonatomic) BOOL playShuffled;
@property (nonatomic) BOOL hasPlayShuffled;
@property (nonatomic) int playbackQueueLocation;
@property (nonatomic) BOOL hasPlaybackQueueLocation;
@property (nonatomic) int playbackRepeatMode;
@property (nonatomic) BOOL hasPlaybackRepeatMode;
@property (nonatomic) double playbackSpeed;
@property (nonatomic) BOOL hasPlaybackSpeed;
@property (retain, nonatomic) _INPBString *playlistTitle;
@property (readonly, nonatomic) BOOL hasPlaylistTitle;
@property (retain, nonatomic) _INPBPrivatePlayMediaIntentData *privatePlayMediaIntentData;
@property (readonly, nonatomic) BOOL hasPrivatePlayMediaIntentData;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;
@property (readonly, nonatomic) BOOL hasProxiedBundleIdentifier;
@property (copy, nonatomic) NSString *recoID;
@property (readonly, nonatomic) BOOL hasRecoID;
@property (nonatomic) BOOL resumePlayback;
@property (nonatomic) BOOL hasResumePlayback;
@property (retain, nonatomic) _INPBString *showTitle;
@property (readonly, nonatomic) BOOL hasShowTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)bucketType;
+ (Class)mediaItemsType;
+ (Class)alternativeResultsType;
+ (Class)audioSearchResultsType;
+ (Class)hashedRouteUIDsType;

- (void)addBucket:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)clearAlternativeResults;
- (void)clearBuckets;
- (void)addAlternativeResults:(id)a0;
- (id)alternativeResultsAtIndex:(unsigned long long)a0;
- (void)clearAudioSearchResults;
- (void)addAudioSearchResults:(id)a0;
- (id)audioSearchResultsAtIndex:(unsigned long long)a0;
- (id)bucketAtIndex:(unsigned long long)a0;
- (void)clearHashedRouteUIDs;
- (void)addHashedRouteUIDs:(id)a0;
- (id)hashedRouteUIDsAtIndex:(unsigned long long)a0;
- (void)clearMediaItems;
- (void)addMediaItems:(id)a0;
- (id)mediaItemsAtIndex:(unsigned long long)a0;
- (id)parsecCategoryAsString:(int)a0;
- (int)StringAsParsecCategory:(id)a0;
- (id)playbackQueueLocationAsString:(int)a0;
- (int)StringAsPlaybackQueueLocation:(id)a0;
- (id)playbackRepeatModeAsString:(int)a0;
- (int)StringAsPlaybackRepeatMode:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
