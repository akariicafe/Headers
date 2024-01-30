@class NSOperationQueue, MRPlayerPath, NSObject;
@protocol OS_dispatch_queue;

@interface AirPlayReceiverMediaRemoteHelper : NSObject {
    NSOperationQueue *_dataTransferQueue;
    NSObject<OS_dispatch_queue> *_dataTransferQueueInternal;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct { MRPlayerPath *playerPath; void *commandHandlerToken; struct OpaqueFigCFWeakReferenceHolder *weakDelegate; } _state;
}

+ (void)setIsNowPlayingApplication:(unsigned char)a0;
+ (void)becomeNowPlayingApplication;
+ (void)resignAsNowPlayingApplication;

- (id)initWithPlayerID:(struct __CFString { } *)a0;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void)setIsNowPlaying:(unsigned char)a0;
- (void)startNowPlayingSession;
- (void)stopNowPlayingSession;
- (void)associateNowPlayingSessionWithAudioSession:(unsigned int)a0;
- (void)broadcastPauseCommand;
- (void)setMRNowPlayingInfo:(struct __CFDictionary { } *)a0 withMergePolicy:(unsigned char)a1;
- (void)setMRPlaybackState:(unsigned int)a0;
- (unsigned int)handleMediaRemoteCommand:(unsigned int)a0 withOptions:(struct __CFDictionary { } *)a1;
- (void)registerCommandHandler;
- (void)unregisterCommandHandler;
- (void)setMRSupportedCommands:(struct __CFArray { } *)a0;
- (void)setMRSupportedCommandsFromSerializedArray:(struct __CFArray { } *)a0;
- (void)makeNowPlayingPlayer;
- (void)removeNowPlayingArtwork;
- (void)setAPNowPlayingInfo:(struct __CFDictionary { } *)a0;
- (void)setMRNowPlayingClient:(struct __CFData { } *)a0;
- (void)handlePlaybackStateDidChange:(id)a0;

@end
