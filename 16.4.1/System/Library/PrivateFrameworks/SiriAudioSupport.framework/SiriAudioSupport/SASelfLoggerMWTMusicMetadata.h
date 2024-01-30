@class NSString;

@interface SASelfLoggerMWTMusicMetadata : NSObject {
    void /* unknown type, empty encoding */ errorResolutionType;
    void /* unknown type, empty encoding */ audioQueueType;
}

@property (nonatomic) void /* unknown type, empty encoding */ musicDomain;
@property (nonatomic) void /* unknown type, empty encoding */ queueType;
@property (nonatomic) void /* unknown type, empty encoding */ queueSize;
@property (nonatomic) void /* unknown type, empty encoding */ isShuffled;
@property (nonatomic) void /* unknown type, empty encoding */ prefetchedMetadataSource;
@property (nonatomic) void /* unknown type, empty encoding */ assetEndPoint;
@property (nonatomic) void /* unknown type, empty encoding */ streamingContentType;
@property (nonatomic) void /* unknown type, empty encoding */ formatCodec;
@property (nonatomic) void /* unknown type, empty encoding */ formatBitrate;
@property (nonatomic) void /* unknown type, empty encoding */ formatBitDepth;
@property (nonatomic) void /* unknown type, empty encoding */ formatChannels;
@property (nonatomic) void /* unknown type, empty encoding */ formatLayout;
@property (nonatomic) void /* unknown type, empty encoding */ formatSampleRate;
@property (nonatomic) void /* unknown type, empty encoding */ formatTier;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfSpeakers;
@property (nonatomic) void /* unknown type, empty encoding */ routeConfiguration;
@property (nonatomic) void /* unknown type, empty encoding */ isAccountDataReady;
@property (nonatomic) void /* unknown type, empty encoding */ isStoreBagReady;
@property (nonatomic) void /* unknown type, empty encoding */ isLeaseReady;
@property (nonatomic) void /* unknown type, empty encoding */ isOnlineKeyReady;
@property (nonatomic) void /* unknown type, empty encoding */ isOfflineKeyReady;
@property (nonatomic) void /* unknown type, empty encoding */ isHlsKeysReady;
@property (nonatomic) void /* unknown type, empty encoding */ isInterruptingPlayback;
@property (nonatomic) void /* unknown type, empty encoding */ isRemoteSetQueue;
@property (nonatomic) void /* unknown type, empty encoding */ isDelegatedPlayback;
@property (nonatomic) void /* unknown type, empty encoding */ isNonDefaultUser;
@property (nonatomic) void /* unknown type, empty encoding */ isAutoPlay;
@property (nonatomic) void /* unknown type, empty encoding */ isFirstPlayAfterAppLaunch;
@property (nonatomic) void /* unknown type, empty encoding */ isMiniSinfAvailable;
@property (nonatomic) void /* unknown type, empty encoding */ isSharePlayPlayback;
@property (nonatomic) void /* unknown type, empty encoding */ isSuzeLease;
@property (nonatomic) void /* unknown type, empty encoding */ networkConnectionType;
@property (nonatomic) void /* unknown type, empty encoding */ wasMediaLibraryDatabaseUpgraded;
@property (nonatomic) void /* unknown type, empty encoding */ isPrimaryUser;
@property (nonatomic, copy) NSString *errorResolutionType;
@property (nonatomic) void /* unknown type, empty encoding */ endPointType;
@property (nonatomic) void /* unknown type, empty encoding */ routeType;
@property (nonatomic) void /* unknown type, empty encoding */ formatLayoutValue;
@property (nonatomic) void /* unknown type, empty encoding */ assetSource;
@property (nonatomic) void /* unknown type, empty encoding */ assetLocation;
@property (nonatomic) void /* unknown type, empty encoding */ subscriptionType;
@property (nonatomic) void /* unknown type, empty encoding */ hasLookupWaitTime;
@property (nonatomic) void /* unknown type, empty encoding */ hasBagWaitTime;
@property (nonatomic) void /* unknown type, empty encoding */ hasLeaseWaitTime;
@property (nonatomic) void /* unknown type, empty encoding */ hasSuzeLeaseWaitTime;
@property (nonatomic) void /* unknown type, empty encoding */ hasSubscriptionAssetLoadWaitTime;
@property (nonatomic) void /* unknown type, empty encoding */ hasMediaRedownloadWaitTime;
@property (nonatomic) void /* unknown type, empty encoding */ cmInitialStartupItemCreationToReadyToPlayDurationInMs;
@property (nonatomic) void /* unknown type, empty encoding */ cmInitialStartupItemCreationToLtluDurationInMs;
@property (nonatomic) void /* unknown type, empty encoding */ primaryPlaylistConnectionTlsHandshakeDurationInMs;
@property (nonatomic) void /* unknown type, empty encoding */ primaryPlaylistRequestDurationInMs;
@property (nonatomic) void /* unknown type, empty encoding */ subPlaylistConnectionTlsHandshakeDurationInMs;
@property (nonatomic) void /* unknown type, empty encoding */ subPlaylistRequestDurationInMs;
@property (nonatomic) void /* unknown type, empty encoding */ contentConnectionTlsHandshakeDurationInMs;
@property (nonatomic) void /* unknown type, empty encoding */ contentFirstSegmentDurationInMs;
@property (nonatomic, copy) NSString *audioQueueType;

- (id)init;
- (void).cxx_destruct;

@end
