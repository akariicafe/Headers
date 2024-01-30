@class VCAudioPayloadConfig;

@interface VCAudioPayload : NSObject {
    struct SoundDec_t { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x1; int x2; int x3; struct OpaqueAudioConverter *x4; char *x5; int x6; struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } x7; struct AudioBufferList *x8; struct AudioBufferList *x9; char *x10; char *x11; int x12; int x13; int x14; int x15; unsigned char x16; int x17; int x18; unsigned int x19; unsigned int x20; } *_encoder;
    BOOL _shouldReset;
}

@property (readonly, nonatomic) VCAudioPayloadConfig *config;
@property (readonly, nonatomic) unsigned int bitrate;

- (BOOL)setBitrate:(unsigned int)a0;
- (id)description;
- (void)dealloc;
- (id)initWithConfig:(id)a0;
- (void)setCurrentDTXEnable:(BOOL)a0;
- (BOOL)getMagicCookie:(char *)a0 withLength:(unsigned int *)a1;
- (BOOL)createEncoderWithInputFormat:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0;
- (int)encodeAudio:(struct opaqueVCAudioBufferList { } *)a0 numInputSamples:(int)a1 outputBytes:(void *)a2 numOutputBytes:(int)a3;
- (BOOL)isDTXEmptyPacket:(unsigned int)a0;
- (void)resetEncoder;
- (void)resetEncoderWithSampleBuffer:(char *)a0 numBytes:(int)a1;

@end
