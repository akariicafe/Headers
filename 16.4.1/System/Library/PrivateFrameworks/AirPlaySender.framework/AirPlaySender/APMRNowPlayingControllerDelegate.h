@class NSString, MRNowPlayingController;

@interface APMRNowPlayingControllerDelegate : NSObject <MRNowPlayingControllerDelegate> {
    struct OpaqueAPMetadataSource { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; struct __CFDictionary *x2[4]; struct __CFDictionary *x3; struct __CFArray *x4; struct __CFNumber *x5; struct __CFData *x6; struct __CFString *x7; id x8; unsigned long long x9; struct __CFDictionary *x10; id x11; id x12; } *_metadataSource;
    MRNowPlayingController *_nowPlayingController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controller:(id)a0 playerPathDidChange:(id)a1;
- (void)controller:(id)a0 didLoadArtworkForContentItems:(id)a1;
- (void)controller:(id)a0 clientPropertiesDidChangeFrom:(id)a1 to:(id)a2;
- (void)controller:(id)a0 didLoadResponse:(id)a1;
- (void)dealloc;
- (void)controller:(id)a0 contentItemsDidUpdateWithContentItemChanges:(id)a1;
- (void)stop;
- (void)controller:(id)a0 playbackQueueDidChangeFrom:(id)a1 to:(id)a2;
- (void)start;
- (void)controller:(id)a0 playbackStateDidChangeFrom:(unsigned int)a1 to:(unsigned int)a2;
- (void)controller:(id)a0 supportedCommandsDidChangeFrom:(id)a1 to:(id)a2;
- (void)flushMetadata;
- (id)initWithMetadataSource:(struct OpaqueAPMetadataSource { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; struct __CFDictionary *x2[4]; struct __CFDictionary *x3; struct __CFArray *x4; struct __CFNumber *x5; struct __CFData *x6; struct __CFString *x7; id x8; unsigned long long x9; struct __CFDictionary *x10; id x11; id x12; } *)a0;
- (void)notifyContentItemUpdates:(id)a0;
- (void)notifyNewContentItems:(id)a0;
- (void)notifyNewNowPlayingClient:(id)a0;
- (void)notifyNewPlaybackState:(unsigned int)a0;
- (void)notifyNewProxiableSupportedCommands:(id)a0;

@end
