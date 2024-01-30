@interface AVVCAudioBuffer : NSObject {
    void *_impl;
}

@property (readonly) int channels;
@property (readonly) int bytesCapacity;
@property int bytesDataSize;
@property (readonly) void *data;
@property (readonly) int packetDescriptionCapacity;
@property (readonly) int packetDescriptionCount;
@property (readonly) struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *packetDescriptions;
@property (readonly) unsigned long long timeStamp;
@property (readonly) struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *streamDescription;
@property (readonly) BOOL upsamplingSourceAudio;
@property (readonly) BOOL remoteVoiceActivityAvailable;
@property (readonly) unsigned char remoteVoiceActivityRMS;
@property (readonly) unsigned char remoteVoiceActivityVAD;

- (void)finalize;
- (void)dealloc;
- (id)initWithAudioQueueBuffer:(struct MyAudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x7; BOOL x8; unsigned char x9; unsigned char x10; BOOL x11; } *)a0 channels:(int)a1 timeStamp:(unsigned long long)a2;
- (void)setPacketDescriptions:(const struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a0 count:(int)a1;

@end
