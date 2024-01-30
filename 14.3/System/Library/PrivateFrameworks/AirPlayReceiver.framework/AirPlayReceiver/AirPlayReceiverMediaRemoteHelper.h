@class NSObject;
@protocol OS_dispatch_queue;

@interface AirPlayReceiverMediaRemoteHelper : NSObject {
    void *_mediaRemotePlayer;
    void *_mediaRemotePlayerPathRef;
    void *_mediaRemoteCommandHandlerToken;
    NSObject<OS_dispatch_queue> *_dataTransferQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct OpaqueFigCFWeakReferenceHolder { } *_weakDelegate;
}

+ (void)becomeNowPlayingApplication;
+ (void)resignAsNowPlayingApplication;
+ (void)setIsNowPlayingApplication:(unsigned char)a0;

- (id)initWithPlayerID:(struct __CFString { } *)a0;
- (void)dealloc;
- (void)setDelegate:(id)a0;
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

@end
