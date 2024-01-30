@class NSString, NSData;

@interface _NMRCommandOptionsProtobuf : PBCodable <NSCopying> {
    struct { unsigned char playbackPosition : 1; unsigned char radioStationID : 1; unsigned char trackID : 1; unsigned char playbackQueueInsertionPosition : 1; unsigned char playbackRate : 1; unsigned char queueEndAction : 1; unsigned char rating : 1; unsigned char repeatMode : 1; unsigned char sendOptions : 1; unsigned char shuffleMode : 1; unsigned char skipInterval : 1; unsigned char externalPlayerCommand : 1; unsigned char negative : 1; unsigned char requestDefermentToPlaybackQueuePosition : 1; unsigned char shouldBeginRadioPlayback : 1; unsigned char shouldOverrideManuallyCuratedQueue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSourceID;
@property (retain, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) BOOL hasMediaType;
@property (retain, nonatomic) NSString *mediaType;
@property (nonatomic) BOOL hasExternalPlayerCommand;
@property (nonatomic) BOOL externalPlayerCommand;
@property (nonatomic) BOOL hasSkipInterval;
@property (nonatomic) float skipInterval;
@property (nonatomic) BOOL hasPlaybackRate;
@property (nonatomic) float playbackRate;
@property (nonatomic) BOOL hasRating;
@property (nonatomic) float rating;
@property (nonatomic) BOOL hasNegative;
@property (nonatomic) BOOL negative;
@property (nonatomic) BOOL hasPlaybackPosition;
@property (nonatomic) double playbackPosition;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) int repeatMode;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) int shuffleMode;
@property (readonly, nonatomic) BOOL hasContextID;
@property (retain, nonatomic) NSString *contextID;
@property (nonatomic) BOOL hasTrackID;
@property (nonatomic) unsigned long long trackID;
@property (nonatomic) BOOL hasRadioStationID;
@property (nonatomic) long long radioStationID;
@property (readonly, nonatomic) BOOL hasRadioStationHash;
@property (retain, nonatomic) NSString *radioStationHash;
@property (readonly, nonatomic) BOOL hasSystemAppPlaybackQueueData;
@property (retain, nonatomic) NSData *systemAppPlaybackQueueData;
@property (readonly, nonatomic) BOOL hasDestinationAppDisplayID;
@property (retain, nonatomic) NSString *destinationAppDisplayID;
@property (nonatomic) BOOL hasSendOptions;
@property (nonatomic) unsigned int sendOptions;
@property (nonatomic) BOOL hasRequestDefermentToPlaybackQueuePosition;
@property (nonatomic) BOOL requestDefermentToPlaybackQueuePosition;
@property (nonatomic) BOOL hasShouldOverrideManuallyCuratedQueue;
@property (nonatomic) BOOL shouldOverrideManuallyCuratedQueue;
@property (readonly, nonatomic) BOOL hasStationURL;
@property (retain, nonatomic) NSString *stationURL;
@property (nonatomic) BOOL hasShouldBeginRadioPlayback;
@property (nonatomic) BOOL shouldBeginRadioPlayback;
@property (nonatomic) BOOL hasPlaybackQueueInsertionPosition;
@property (nonatomic) int playbackQueueInsertionPosition;
@property (readonly, nonatomic) BOOL hasContentItemID;
@property (retain, nonatomic) NSString *contentItemID;
@property (nonatomic) BOOL hasQueueEndAction;
@property (nonatomic) int queueEndAction;

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
- (id)queueEndActionAsString:(int)a0;
- (int)StringAsQueueEndAction:(id)a0;
- (id)repeatModeAsString:(int)a0;
- (int)StringAsRepeatMode:(id)a0;
- (id)shuffleModeAsString:(int)a0;
- (int)StringAsShuffleMode:(id)a0;

@end
