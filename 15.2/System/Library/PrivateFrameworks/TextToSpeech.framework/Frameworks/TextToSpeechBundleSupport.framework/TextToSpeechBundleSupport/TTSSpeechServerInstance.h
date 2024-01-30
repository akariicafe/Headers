@class NSLock, NSMutableArray, TTSTimer, TTSSpeechServer, NSObject, TTSVocalizer;
@protocol OS_dispatch_queue;

@interface TTSSpeechServerInstance : NSObject {
    NSLock *_speechLock;
    NSMutableArray *_speechRequestQueue;
    unsigned char _speechActive;
    unsigned char _speechThreadActive;
    struct __CFRunLoop { } *_speechThreadRunLoop;
    struct __CFRunLoopSource { } *_speechActivitySignal;
    struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *_speechActiveContext;
    unsigned char _newVoiceInstalled;
    unsigned char _speechThreadPriorityIsHigh;
    unsigned char _shouldTerminateThread;
    unsigned char _didTerminateThread;
}

@property (retain, nonatomic) TTSTimer *wordCallbackTimer;
@property (nonatomic) unsigned long long synthesizerId;
@property (nonatomic) TTSSpeechServer *speechService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain, nonatomic) TTSVocalizer *vocalizer;
@property (copy, nonatomic) id /* block */ unitTestMarkerProcessingCallback;

- (oneway void)continueSpeechRequest:(id)a0;
- (oneway void)stopSpeechRequest:(id)a0 atMark:(long long)a1;
- (oneway void)startSpeechRequest:(id)a0;
- (id)init;
- (void)dealloc;
- (oneway void)pauseSpeechRequest:(id)a0 atMark:(long long)a1;
- (oneway void)getSpeechIsActiveForRequest:(id)a0 reply:(id /* block */)a1;
- (id)_getAvailableVoiceForVoice:(id)a0;
- (void)_appendSpeechRequestAndStart:(id)a0;
- (void)_startSpeechThread;
- (void)_initializeSpeech:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0;
- (unsigned char)_activeRequestShouldStopAtAnyMark:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0;
- (unsigned char)_setActiveRequestActionForMark:(long long)a0 clientRequest:(id)a1 markType:(long long)a2;
- (void)_initializeSpeechEngine:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0;
- (void)_processCurrentRequest:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0;
- (void)_cleanupAfterRequest:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0;
- (void)_ttsLogSpeechForServerRequest:(id)a0;
- (unsigned char)_activeRequestShouldStopImmediately:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0;
- (unsigned char)_activeRequestShouldPauseImmediately:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0;
- (unsigned char)_activeRequestShouldContinue:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0;
- (void)_uninitializeSpeech:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0;
- (unsigned char)_needsParameterChange:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0 lock:(unsigned char)a1 rate:(float *)a2 pitch:(float *)a3 volume:(float *)a4 footprint:(long long *)a5 voiceType:(long long *)a6;
- (void)_setParameters:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0 rate:(float)a1 pitch:(float)a2 volume:(float)a3 footprint:(long long)a4;
- (BOOL)_footprintOrVoiceNameHasChanged:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0;
- (void)_loadVoiceResource:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0 voiceResource:(id)a1;
- (void)_speechThreadSignal;
- (void)_terminateThread;
- (unsigned int)_vocalizerMessageBufferDone:(struct _VE_HSAFE { void *x0; unsigned int x1; })a0 context:(struct { struct __TTSPlayback *x0; struct *x1; struct AudioQueueBuffer *x2; int x3; struct { unsigned int x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned int x7; unsigned int x8; char *x9; } x4[32]; } *)a1 outData:(struct { int x0; unsigned int x1; void *x2; unsigned int x3; struct *x4; } *)a2;
- (void)_handleSpeechThread;
- (unsigned char)_shouldContinueSpeechGivenMark:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a0 markType:(long long)a1 blockIfPaused:(unsigned char)a2;
- (void)processMarker:(long long)a0 withByteOffset:(unsigned int)a1 markerPosition:(unsigned int)a2 markerLength:(unsigned int)a3 context:(struct { id x0; long long x1; long long x2; long long x3; struct _VE_HSAFE { void *x0; unsigned int x1; } x4; struct __TTSPlayback *x5; unsigned char x6; char *x7; int x8; int x9; struct __CFString *x10; struct __CFString *x11; float x12; float x13; float x14; char *x15; char *x16; long long x17; long long x18; id x19; unsigned int x20; struct OpaqueAudioFileID *x21; int x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned char x26; unsigned char x27; } *)a4 currentTime:(unsigned long long)a5 secondPass:(BOOL)a6;
- (void)_newVoiceInstalled;
- (id)_ttSSpeechServerCopyVoiceInfoForLanguage:(id)a0 voiceType:(long long)a1 queryingMobileAssets:(BOOL)a2;
- (BOOL)_defaultVoiceIsFallback;
- (struct __CFArray { } *)loadedVoiceResources;
- (id)_speechVocalizerPlaybackDataProviderWithVocalizer:(id)a0 playback:(struct __TTSPlayback { } *)a1 inContext:(void *)a2;

@end
