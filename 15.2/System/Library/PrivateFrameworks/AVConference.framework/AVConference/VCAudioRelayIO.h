@class NSString;
@protocol VCBasebandCodecNotifications;

@interface VCAudioRelayIO : VCObject <NSCopying, VCBasebandCodecNotifications, VCAudioIOSink, VCAudioIOSource> {
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _clientFormat;
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _relayFormat;
    struct tagVCAudioRelayIOContext { struct tagVCAudioFrameFormat *clientFormat; struct tagVCAudioFrameFormat *relayFormat; void /* function */ *callback; void *callbackContext; struct opaqueVCAudioBufferList *sampleBuffer; float powerRMS; struct tagVCAudioClientControllerTimeInfo { unsigned int clientSampleRate; unsigned int controllerSampleRate; BOOL didHostTimeReferenceChange; BOOL isLastHostTimeValid; double lastHostTime; unsigned int lastClientTimestamp; unsigned int timestampOffset; unsigned long long controllerTimestamp; } timeInfo; } _micContext;
    struct tagVCAudioRelayIOContext { struct tagVCAudioFrameFormat *clientFormat; struct tagVCAudioFrameFormat *relayFormat; void /* function */ *callback; void *callbackContext; struct opaqueVCAudioBufferList *sampleBuffer; float powerRMS; struct tagVCAudioClientControllerTimeInfo { unsigned int clientSampleRate; unsigned int controllerSampleRate; BOOL didHostTimeReferenceChange; BOOL isLastHostTimeValid; double lastHostTime; unsigned int lastClientTimestamp; unsigned int timestampOffset; unsigned long long controllerTimestamp; } timeInfo; } _speakerContext;
    struct _VCRemoteCodecInfo { unsigned int codecType; double sampleRate; } _remoteCodecInfo;
    id _relay;
}

@property (readonly) const struct tagVCAudioRelayIOContext { struct tagVCAudioFrameFormat *x0; struct tagVCAudioFrameFormat *x1; void /* function */ *x2; void *x3; struct opaqueVCAudioBufferList *x4; float x5; struct tagVCAudioClientControllerTimeInfo { unsigned int x0; unsigned int x1; BOOL x2; BOOL x3; double x4; unsigned int x5; unsigned int x6; unsigned long long x7; } x6; } *micContext;
@property (readonly) const struct tagVCAudioRelayIOContext { struct tagVCAudioFrameFormat *x0; struct tagVCAudioFrameFormat *x1; void /* function */ *x2; void *x3; struct opaqueVCAudioBufferList *x4; float x5; struct tagVCAudioClientControllerTimeInfo { unsigned int x0; unsigned int x1; BOOL x2; BOOL x3; double x4; unsigned int x5; unsigned int x6; unsigned long long x7; } x6; } *speakerContext;
@property (readonly, nonatomic) BOOL isRunning;
@property BOOL usePacketThread;
@property (copy) id /* block */ startCompletionHandler;
@property (nonatomic) const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *remoteCodecInfo;
@property (readonly) struct PacketThread_s { } *packetThread;
@property (nonatomic) const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *clientFormat;
@property (readonly) const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *relayFormat;
@property void /* function */ *micCallback;
@property void *micCallbackContext;
@property (readonly, nonatomic) struct opaqueVCAudioBufferList { } *micBuffer;
@property unsigned int micTimestamp;
@property float micPowerRMS;
@property void /* function */ *speakerCallback;
@property void *speakerCallbackContext;
@property (readonly, nonatomic) struct opaqueVCAudioBufferList { } *speakerBuffer;
@property unsigned int speakerTimestamp;
@property float speakerPowerRMS;
@property void /* function */ *updateRemoteCodecInfoCallback;
@property void *updateRemoteCodecInfoContext;
@property (readonly) double preferredIODuration;
@property id<VCBasebandCodecNotifications> relay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMicContext:(const struct tagVCAudioRelayIOContext { struct tagVCAudioFrameFormat *x0; struct tagVCAudioFrameFormat *x1; void /* function */ *x2; void *x3; struct opaqueVCAudioBufferList *x4; float x5; struct tagVCAudioClientControllerTimeInfo { unsigned int x0; unsigned int x1; BOOL x2; BOOL x3; double x4; unsigned int x5; unsigned int x6; unsigned long long x7; } x6; } *)a0 speakerContext:(const struct tagVCAudioRelayIOContext { struct tagVCAudioFrameFormat *x0; struct tagVCAudioFrameFormat *x1; void /* function */ *x2; void *x3; struct opaqueVCAudioBufferList *x4; float x5; struct tagVCAudioClientControllerTimeInfo { unsigned int x0; unsigned int x1; BOOL x2; BOOL x3; double x4; unsigned int x5; unsigned int x6; unsigned long long x7; } x6; } *)a1;
- (void)destroyPacketThread;
- (void)internalPushAudioSamples:(struct opaqueVCAudioBufferList { } *)a0;
- (void)closeRecordings;
- (BOOL)isEqualToRelayIO:(id)a0;
- (void)printStreamFormats;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { } *)a0;
- (void)initializeFormatContextPointers;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)createRecordingsWithName:(id)a0;
- (void)createAudioBuffers;
- (void)dealloc;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (BOOL)isInitialized;
- (BOOL)createPacketThreadWithIOBufferDuration:(double)a0 name:(id)a1 error:(id *)a2;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { } *)a0;
- (void)createBuffersForIOContext:(struct tagVCAudioRelayIOContext { struct tagVCAudioFrameFormat *x0; struct tagVCAudioFrameFormat *x1; void /* function */ *x2; void *x3; struct opaqueVCAudioBufferList *x4; float x5; struct tagVCAudioClientControllerTimeInfo { unsigned int x0; unsigned int x1; BOOL x2; BOOL x3; double x4; unsigned int x5; unsigned int x6; unsigned long long x7; } x6; } *)a0;

@end
