@class MPCPlayerPath, NSString, MPNowPlayingInfoCenter, MPRemoteCommandCenter, NSMutableDictionary, NSObject, NSMutableArray, MPCPlaybackEngine;
@protocol OS_dispatch_queue;

@interface _MPCPlaybackEngineSessionManager : NSObject <MPCPlaybackEngineEventObserving, MPNowPlayingPlaybackQueueDataSource>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) MPNowPlayingInfoCenter *infoCenter;
@property (readonly, nonatomic) MPRemoteCommandCenter *commandCenter;
@property (readonly, nonatomic) NSMutableArray *sessionArchives;
@property (readonly, nonatomic) NSMutableDictionary *sessionIdentifierArchiveMap;
@property (readonly, nonatomic) NSMutableDictionary *stagedQueueControllers;
@property (readonly, nonatomic) MPCPlayerPath *playerPath;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (retain, nonatomic) NSString *stateRestorationSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivesAtURL:(id)a0;

- (void)loadSessionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)stagedQueueControllerIdentifiers;
- (id)nowPlayingInfoCenter:(id)a0 contentItemIDForOffset:(long long)a1;
- (void)stageQueueController:(id)a0 forIdentifier:(id)a1;
- (void)_performCommandEvent:(id)a0 completion:(id /* block */)a1;
- (id)_playbackSessionsDirectory;
- (void)publishIfNeeded;
- (BOOL)unstageQueueControllerForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlaybackEngine:(id)a0;
- (id)nowPlayingInfoCenter:(id)a0 artworkForContentItem:(id)a1 size:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (id)nowPlayingInfoCenter:(id)a0 contentItemForID:(id)a1;
- (void)deleteSessionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)queueControllerForIdentifier:(id)a0;
- (void)saveSessionWithCompletion:(id /* block */)a0;
- (id)_cachesDirectory;

@end
