@class NSString;
@protocol VCBasebandCodecNotifications;

@interface VCAudioRelayIO : NSObject <NSCopying, VCBasebandCodecNotifications> {
    struct _VCRemoteCodecInfo { unsigned int codecType; double sampleRate; } _remoteCodecInfo;
    id _relay;
}

@property unsigned int speakerTimestamp;
@property unsigned int micTimestamp;
@property (readonly) struct PacketThread_s { } *packetThread;
@property float micPowerRMS;
@property float speakerPowerRMS;
@property id<VCBasebandCodecNotifications> relay;
@property (readonly, nonatomic) BOOL isRunning;
@property BOOL usePacketThread;
@property (copy) id /* block */ startCompletionHandler;
@property (nonatomic) const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *remoteCodecInfo;
@property struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } micFormat;
@property void /* function */ *micCallback;
@property void *micCallbackContext;
@property (readonly, nonatomic) struct opaqueVCAudioBufferList { } *micBuffer;
@property struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } speakerFormat;
@property void /* function */ *speakerCallback;
@property void *speakerCallbackContext;
@property (readonly, nonatomic) struct opaqueVCAudioBufferList { } *speakerBuffer;
@property void /* function */ *updateRemoteCodecInfoCallback;
@property void *updateRemoteCodecInfoContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)destroyPacketThread;
- (void)dealloc;
- (BOOL)createPacketThreadWithIOBufferDuration:(double)a0 name:(id)a1 error:(id *)a2;
- (BOOL)isEqualToRelayIO:(id)a0;
- (void)createAudioBuffersWithIOBufferDuration:(double)a0;
- (void)closeRecordings;
- (void)createRecordingsWithName:(id)a0;
- (BOOL)isInitialized;
- (void)printStreamFormats;

@end
