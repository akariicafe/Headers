@class NSString, NSData;

@interface _MRCommandOptionsProtobuf : PBCodable <NSCopying> {
    struct { unsigned char playbackPosition : 1; unsigned char radioStationID : 1; unsigned char trackID : 1; unsigned char playbackQueueDestinationOffset : 1; unsigned char playbackQueueInsertionPosition : 1; unsigned char playbackQueueOffset : 1; unsigned char playbackRate : 1; unsigned char playbackSessionPriority : 1; unsigned char queueEndAction : 1; unsigned char rating : 1; unsigned char repeatMode : 1; unsigned char replaceIntent : 1; unsigned char sendOptions : 1; unsigned char shuffleMode : 1; unsigned char skipInterval : 1; unsigned char beginSeek : 1; unsigned char endSeek : 1; unsigned char externalPlayerCommand : 1; unsigned char negative : 1; unsigned char preservesQueueEndAction : 1; unsigned char preservesRepeatMode : 1; unsigned char preservesShuffleMode : 1; unsigned char requestDefermentToPlaybackQueuePosition : 1; unsigned char shouldBeginRadioPlayback : 1; unsigned char shouldOverrideManuallyCuratedQueue : 1; unsigned char trueCompletion : 1; unsigned char verifySupportedCommands : 1; } _has;
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
@property (nonatomic) int sendOptions;
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
@property (nonatomic) BOOL hasPlaybackQueueOffset;
@property (nonatomic) int playbackQueueOffset;
@property (nonatomic) BOOL hasPlaybackQueueDestinationOffset;
@property (nonatomic) int playbackQueueDestinationOffset;
@property (readonly, nonatomic) BOOL hasLanguageOption;
@property (retain, nonatomic) NSData *languageOption;
@property (readonly, nonatomic) BOOL hasPlaybackQueueContext;
@property (retain, nonatomic) NSData *playbackQueueContext;
@property (readonly, nonatomic) BOOL hasInsertAfterContentItemID;
@property (retain, nonatomic) NSString *insertAfterContentItemID;
@property (readonly, nonatomic) BOOL hasNowPlayingContentItemID;
@property (retain, nonatomic) NSString *nowPlayingContentItemID;
@property (nonatomic) BOOL hasReplaceIntent;
@property (nonatomic) int replaceIntent;
@property (readonly, nonatomic) BOOL hasCommandID;
@property (retain, nonatomic) NSString *commandID;
@property (readonly, nonatomic) BOOL hasSenderID;
@property (retain, nonatomic) NSString *senderID;
@property (readonly, nonatomic) BOOL hasRemoteControlInterface;
@property (retain, nonatomic) NSString *remoteControlInterface;
@property (nonatomic) BOOL hasBeginSeek;
@property (nonatomic) BOOL beginSeek;
@property (nonatomic) BOOL hasEndSeek;
@property (nonatomic) BOOL endSeek;
@property (readonly, nonatomic) BOOL hasPlaybackSession;
@property (retain, nonatomic) NSData *playbackSession;
@property (readonly, nonatomic) BOOL hasUserIdentityData;
@property (retain, nonatomic) NSData *userIdentityData;
@property (readonly, nonatomic) BOOL hasInsertBeforeContentItemID;
@property (retain, nonatomic) NSString *insertBeforeContentItemID;
@property (nonatomic) BOOL hasQueueEndAction;
@property (nonatomic) int queueEndAction;
@property (nonatomic) BOOL hasPreservesRepeatMode;
@property (nonatomic) BOOL preservesRepeatMode;
@property (nonatomic) BOOL hasPreservesShuffleMode;
@property (nonatomic) BOOL preservesShuffleMode;
@property (nonatomic) BOOL hasPreservesQueueEndAction;
@property (nonatomic) BOOL preservesQueueEndAction;
@property (readonly, nonatomic) BOOL hasHomeKitUserIdentifier;
@property (retain, nonatomic) NSString *homeKitUserIdentifier;
@property (nonatomic) BOOL hasVerifySupportedCommands;
@property (nonatomic) BOOL verifySupportedCommands;
@property (readonly, nonatomic) BOOL hasPlaybackSessionIdentifier;
@property (retain, nonatomic) NSString *playbackSessionIdentifier;
@property (nonatomic) BOOL hasPlaybackSessionPriority;
@property (nonatomic) int playbackSessionPriority;
@property (readonly, nonatomic) BOOL hasPlaybackSessionFilePath;
@property (retain, nonatomic) NSString *playbackSessionFilePath;
@property (readonly, nonatomic) BOOL hasPlaybackSessionRevision;
@property (retain, nonatomic) NSString *playbackSessionRevision;
@property (readonly, nonatomic) BOOL hasPlaybackSessionMetadata;
@property (retain, nonatomic) NSData *playbackSessionMetadata;
@property (readonly, nonatomic) BOOL hasPlaybackSessionType;
@property (retain, nonatomic) NSString *playbackSessionType;
@property (nonatomic) BOOL hasTrueCompletion;
@property (nonatomic) BOOL trueCompletion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)sendOptionsAsString:(int)a0;
- (int)StringAsSendOptions:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)replaceIntentAsString:(int)a0;
- (int)StringAsReplaceIntent:(id)a0;
- (id)dictionaryRepresentation;
- (id)queueEndActionAsString:(int)a0;
- (int)StringAsQueueEndAction:(id)a0;
- (id)playbackSessionPriorityAsString:(int)a0;
- (int)StringAsPlaybackSessionPriority:(id)a0;
- (id)repeatModeAsString:(int)a0;
- (int)StringAsRepeatMode:(id)a0;
- (id)shuffleModeAsString:(int)a0;
- (int)StringAsShuffleMode:(id)a0;

@end
