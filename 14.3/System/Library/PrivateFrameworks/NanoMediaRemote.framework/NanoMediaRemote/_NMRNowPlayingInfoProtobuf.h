@class NSString, NSData;

@interface _NMRNowPlayingInfoProtobuf : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char elapsedTime : 1; unsigned char radioStationIdentifier : 1; unsigned char storeAdamID : 1; unsigned char storeSubscriptionAdamID : 1; unsigned char timestamp : 1; unsigned char uniqueIdentifier : 1; unsigned char playbackRate : 1; unsigned char preferredPlaybackRate : 1; unsigned char repeatMode : 1; unsigned char shuffleMode : 1; unsigned char isAdvertisement : 1; unsigned char isAlwaysLive : 1; unsigned char isExplicitTrack : 1; unsigned char isMusicApp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAlbum;
@property (retain, nonatomic) NSString *album;
@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) NSString *artist;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasElapsedTime;
@property (nonatomic) double elapsedTime;
@property (nonatomic) BOOL hasPlaybackRate;
@property (nonatomic) float playbackRate;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) int repeatMode;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL hasUniqueIdentifier;
@property (nonatomic) unsigned long long uniqueIdentifier;
@property (nonatomic) BOOL hasIsExplicitTrack;
@property (nonatomic) BOOL isExplicitTrack;
@property (nonatomic) BOOL hasIsMusicApp;
@property (nonatomic) BOOL isMusicApp;
@property (nonatomic) BOOL hasRadioStationIdentifier;
@property (nonatomic) long long radioStationIdentifier;
@property (readonly, nonatomic) BOOL hasRadioStationHash;
@property (retain, nonatomic) NSString *radioStationHash;
@property (readonly, nonatomic) BOOL hasRadioStationName;
@property (retain, nonatomic) NSString *radioStationName;
@property (readonly, nonatomic) BOOL hasArtworkDataDigest;
@property (retain, nonatomic) NSData *artworkDataDigest;
@property (nonatomic) BOOL hasIsAlwaysLive;
@property (nonatomic) BOOL isAlwaysLive;
@property (nonatomic) BOOL hasIsAdvertisement;
@property (nonatomic) BOOL isAdvertisement;
@property (nonatomic) BOOL hasStoreSubscriptionAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;
@property (nonatomic) BOOL hasPreferredPlaybackRate;
@property (nonatomic) float preferredPlaybackRate;
@property (readonly, nonatomic) BOOL hasMediaType;
@property (retain, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) BOOL hasCollectionInfoData;
@property (retain, nonatomic) NSData *collectionInfoData;
@property (readonly, nonatomic) BOOL hasArtworkURL;
@property (retain, nonatomic) NSString *artworkURL;
@property (nonatomic) BOOL hasStoreAdamID;
@property (nonatomic) long long storeAdamID;
@property (readonly, nonatomic) BOOL hasUserInfoData;
@property (retain, nonatomic) NSData *userInfoData;

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
- (id)repeatModeAsString:(int)a0;
- (int)StringAsRepeatMode:(id)a0;
- (id)shuffleModeAsString:(int)a0;
- (int)StringAsShuffleMode:(id)a0;
- (BOOL)validateUniqueIdentifier:(id *)a0 error:(id *)a1;

@end
