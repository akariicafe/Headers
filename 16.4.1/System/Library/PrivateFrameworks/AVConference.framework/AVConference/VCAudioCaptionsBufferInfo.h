@interface VCAudioCaptionsBufferInfo : NSObject {
    struct opaqueVCAudioBufferList { } *_buffer;
}

@property (readonly, nonatomic) long long token;
@property (readonly, nonatomic) unsigned char priority;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format;
@property (readonly, nonatomic) unsigned int countOfLowPrioritySamples;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStreamToken:(long long)a0 format:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 bufferLength:(double)a2;

@end
