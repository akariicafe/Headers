@class AVAudioSession, NSString, NSArray, MPNowPlayingInfoCenter, NSSet, MRPlayerPath, NSDictionary, MPRemoteCommandCenter, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, MPNowPlayingSessionDelegate;

@interface MPNowPlayingSession : NSObject {
    BOOL _invalidated;
    AVAudioSession *_audioSession;
}

@property (nonatomic) BOOL canBecomeActive;
@property (retain, nonatomic) MPNowPlayingInfoCenter *nowPlayingInfoCenter;
@property (retain, nonatomic) NSMutableSet *playerSet;
@property (retain, nonatomic) NSArray *currentAdTimeRanges;
@property (nonatomic) double currentAssetNetDuration;
@property (nonatomic) double currentAssetNetCreditsStartTime;
@property (retain, nonatomic) NSDictionary *baseNowPlayingInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (retain, nonatomic) id creditsTimeObserverToken;
@property (retain, nonatomic) id adTimeRangesStartObserverToken;
@property (retain, nonatomic) id adTimeRangesEndObserverToken;
@property (readonly, nonatomic) NSSet *mxSessionIDs;
@property (nonatomic, getter=isPictureInPictureEnabled) BOOL pictureInPictureEnabled;
@property (readonly, nonatomic) unsigned int audioSessionID;
@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) NSString *routingContextID;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) NSArray *players;
@property (weak, nonatomic) id<MPNowPlayingSessionDelegate> delegate;
@property (nonatomic) BOOL automaticallyPublishesNowPlayingInfo;
@property (readonly, nonatomic) MPRemoteCommandCenter *remoteCommandCenter;
@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (id)nowPlayingSessionForPlayerPath:(id)a0;
+ (id)nowPlayingSessionForPlayerID:(id)a0;

- (void)removePlayer:(id)a0;
- (void)setActive:(BOOL)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)invalidate;
- (void).cxx_destruct;
- (void)updateNowPlayingInfo;
- (void)_playerItemNowPlayingInfoDidChange:(id)a0;
- (void)activePlayerDidChangeNotification:(id)a0;
- (void)addPlayer:(id)a0;
- (void)addPlayerItemObservers:(id)a0;
- (void)addPlayerObservers:(id)a0;
- (void)becomeActiveIfPossibleWithCompletion:(id /* block */)a0;
- (float)effectivePlaybackRateWithPlayer:(id)a0;
- (void)endpointWithCompletion:(id /* block */)a0;
- (void)extractNowPlayingInfoFromPlayersAndUpdateAdRanges;
- (BOOL)hasInvalidAdTimeRange:(id)a0 totalDuration:(id)a1;
- (id)initWithPlayerPath:(id)a0 routingContextID:(id)a1;
- (id)initWithPlayers:(id)a0;
- (id)mediaExperienceIDs;
- (id)mxSessionIDKeyPath;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })netTimeForGrossTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)playerItemDidPlayToEnd:(id)a0;
- (void)playerItemPlaybackStalled:(id)a0;
- (void)playerItemTimeJumped:(id)a0;
- (void)playerPictureInPictureEnabledDidChangeNotification:(id)a0;
- (void)playerRateDidChange:(id)a0;
- (void)removePlayerItemObservers:(id)a0;
- (void)removePlayerObservers:(id)a0;
- (void)updateAudioSession:(id)a0;
- (void)updateMediaExperienceIDs;

@end
