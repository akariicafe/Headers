@class NSOperationQueue, MRPlayerPath, NSObject;
@protocol OS_dispatch_queue;

@interface AirPlayReceiverMediaRemoteHelper : NSObject {
    struct OpaqueAPReceiverSystemInfo { } *_systemInfo;
    struct AirPlayReceiverServerPrivate { } *_server;
    NSOperationQueue *_dataTransferQueue;
    NSObject<OS_dispatch_queue> *_dataTransferQueueInternal;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct { MRPlayerPath *playerPath; void *commandHandlerToken; struct OpaqueFigCFWeakReferenceHolder *weakDelegate; } _state;
}

+ (void)becomeNowPlayingApplication;
+ (void)resignAsNowPlayingApplication;
+ (void)setIsNowPlayingApplication:(unsigned char)a0;

- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void)associateNowPlayingSessionWithAudioSession:(unsigned int)a0;
- (void)broadcastPauseCommand;
- (void)handleActiveSessionWillBeHijacked:(id)a0;
- (void)handleLocalDeviceRoutingContextIDDidChange:(id)a0;
- (unsigned int)handleMediaRemoteCommand:(unsigned int)a0 withOptions:(struct __CFDictionary { } *)a1;
- (void)handlePlaybackStateDidChange:(id)a0;
- (void)handleSilentPrimaryStateDidChange:(id)a0;
- (id)initWithPlayerID:(struct __CFString { } *)a0 withSystemInfo:(struct OpaqueAPReceiverSystemInfo { } *)a1 withReceiverServer:(struct AirPlayReceiverServerPrivate { } *)a2;
- (void)makeNowPlayingPlayer;
- (void)registerCommandHandler;
- (void)removeNowPlayingArtwork;
- (void)setAPNowPlayingInfo:(struct __CFDictionary { } *)a0;
- (void)setIsNowPlaying:(unsigned char)a0;
- (void)setMRNowPlayingClient:(struct __CFData { } *)a0;
- (void)setMRNowPlayingInfo:(struct __CFDictionary { } *)a0 withMergePolicy:(unsigned char)a1;
- (void)setMRPlaybackState:(unsigned int)a0;
- (void)setMRSupportedCommands:(struct __CFArray { } *)a0;
- (void)setMRSupportedCommandsFromSerializedArray:(struct __CFArray { } *)a0;
- (void)startNowPlayingSession;
- (void)stopNowPlayingSession;
- (void)unregisterCommandHandler;

@end
