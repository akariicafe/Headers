@class MPChangePlaybackRateCommand, MPSetPlaybackQueueCommand, MPChangePlaybackPositionCommand, NSMutableArray, NSString, MPInsertIntoPlaybackQueueCommand, MPReorderQueueCommand, MPRatingCommand, MPSetPriorityForPlaybackSessionCommand, MPChangeRepeatModeCommand, MPSkipIntervalCommand, NSObject, MPRemoteCommand, MPChangeShuffleModeCommand, MPSetPlaybackSessionCommand, MPFeedbackCommand, MPAdvanceShuffleModeCommand, MPPreloadPlaybackSessionCommand, MPChangeQueueEndActionCommand, MRPlayerPath, MPAdvanceRepeatModeCommand;
@protocol OS_dispatch_queue;

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate_Internal> {
    NSMutableArray *_activeCommands;
    NSObject<OS_dispatch_queue> *_serialQueue;
    void *_mediaRemoteCommandHandler;
    BOOL _scheduledSupportedCommandsChangedNotification;
    BOOL _canBeNowPlayingApplication;
    MRPlayerPath *_playerPath;
    BOOL _processingEvent;
    NSMutableArray *_eventQueue;
    unsigned long long _stateHandler;
}

@property (readonly, nonatomic) MPRemoteCommand *specialSeekForwardCommand;
@property (readonly, nonatomic) MPRemoteCommand *specialSeekBackwardCommand;
@property (readonly, nonatomic) MPAdvanceShuffleModeCommand *advanceShuffleModeCommand;
@property (readonly, nonatomic) MPAdvanceRepeatModeCommand *advanceRepeatModeCommand;
@property (readonly, nonatomic) MPRemoteCommand *removeFromPlaybackQueueCommand;
@property (readonly, nonatomic) MPReorderQueueCommand *reorderQueueCommand;
@property (readonly, nonatomic) MPRemoteCommand *playItemInQueueCommand;
@property (readonly, nonatomic) MPRemoteCommand *createRadioStationCommand;
@property (readonly, nonatomic) MPSetPlaybackQueueCommand *setPlaybackQueueCommand;
@property (readonly, nonatomic) MPRemoteCommand *prepareForSetPlaybackQueueCommand;
@property (readonly, nonatomic) MPInsertIntoPlaybackQueueCommand *insertIntoPlaybackQueueCommand;
@property (readonly, nonatomic) MPFeedbackCommand *addNowPlayingItemToLibraryCommand;
@property (readonly, nonatomic) MPFeedbackCommand *addItemToLibraryCommand;
@property (readonly, nonatomic) MPSetPlaybackSessionCommand *setPlaybackSessionCommand;
@property (readonly, nonatomic) MPPreloadPlaybackSessionCommand *preloadPlaybackSessionCommand;
@property (readonly, nonatomic) MPSetPriorityForPlaybackSessionCommand *setPriorityForPlaybackSessionCommand;
@property (readonly, nonatomic) MPRemoteCommand *discardPlaybackSessionCommand;
@property (readonly, nonatomic) MPRemoteCommand *reshuffleCommand;
@property (readonly, nonatomic) MPChangeQueueEndActionCommand *changeQueueEndActionCommand;
@property (readonly, copy, nonatomic) NSString *playerID;
@property (nonatomic) BOOL disableAutomaticCanBeNowPlaying;
@property (nonatomic) BOOL wantsSerializedEventDelivery;
@property (readonly, nonatomic) MPRemoteCommand *pauseCommand;
@property (readonly, nonatomic) MPRemoteCommand *playCommand;
@property (readonly, nonatomic) MPRemoteCommand *stopCommand;
@property (readonly, nonatomic) MPRemoteCommand *togglePlayPauseCommand;
@property (readonly, nonatomic) MPRemoteCommand *enableLanguageOptionCommand;
@property (readonly, nonatomic) MPRemoteCommand *disableLanguageOptionCommand;
@property (readonly, nonatomic) MPChangePlaybackRateCommand *changePlaybackRateCommand;
@property (readonly, nonatomic) MPChangeRepeatModeCommand *changeRepeatModeCommand;
@property (readonly, nonatomic) MPChangeShuffleModeCommand *changeShuffleModeCommand;
@property (readonly, nonatomic) MPRemoteCommand *nextTrackCommand;
@property (readonly, nonatomic) MPRemoteCommand *previousTrackCommand;
@property (readonly, nonatomic) MPSkipIntervalCommand *skipForwardCommand;
@property (readonly, nonatomic) MPSkipIntervalCommand *skipBackwardCommand;
@property (readonly, nonatomic) MPRemoteCommand *seekForwardCommand;
@property (readonly, nonatomic) MPRemoteCommand *seekBackwardCommand;
@property (readonly, nonatomic) MPChangePlaybackPositionCommand *changePlaybackPositionCommand;
@property (readonly, nonatomic) MPRatingCommand *ratingCommand;
@property (readonly, nonatomic) MPFeedbackCommand *likeCommand;
@property (readonly, nonatomic) MPFeedbackCommand *dislikeCommand;
@property (readonly, nonatomic) MPFeedbackCommand *bookmarkCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCommandCenter;
+ (long long)_numberOfCommandCentersWithTargets;
+ (id)commandCenterForPlayerID:(id)a0;
+ (void)updateLaunchCommandsWithConfigurationHandler:(id /* block */)a0;
+ (void)getPendingCommandTypesWithCompletion:(id /* block */)a0;

- (id)initWithPlayerID:(id)a0;
- (void)_stopMediaRemoteSync;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_pushMediaRemoteCommand:(unsigned int)a0 withOptions:(struct __CFDictionary { } *)a1 completion:(id /* block */)a2;
- (id)_createRemoteCommandWithConcreteClass:(Class)a0 mediaRemoteType:(unsigned int)a1;
- (id)_activeCommands;
- (void)_startMediaRemoteSync;
- (void)_scheduleSupportedCommandsChanged;
- (void)getPendingCommandTypesWithCompletion:(id /* block */)a0;
- (void)_flushEventQueue;
- (void)remoteCommandDidMutatePropagatableProperty:(id)a0;
- (void)_commandTargetsDidChangeNotification:(id)a0;
- (void)dispatchCommandEvent:(id)a0 completion:(id /* block */)a1;

@end
