@class AVAudioChannelLayout, NSData, NSDictionary;

@interface AVAudioFormat : NSObject <NSSecureCoding> {
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
    AVAudioChannelLayout *_layout;
    unsigned long long _commonFormat;
    void *_reserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isStandard) BOOL standard;
@property (readonly, nonatomic) unsigned long long commonFormat;
@property (readonly, nonatomic) unsigned int channelCount;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic, getter=isInterleaved) BOOL interleaved;
@property (readonly, nonatomic) const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *streamDescription;
@property (readonly, nonatomic) AVAudioChannelLayout *channelLayout;
@property (retain, nonatomic) NSData *magicCookie;
@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic) const struct opaqueCMFormatDescription { } *formatDescription;

+ (id)formatWithInvalidSampleRateAndChannelCount;
+ (id)settingsFromASBD:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 channelLayout:(id)a1;

- (id)initWithSettings:(id)a0;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (id)initStandardFormatWithSampleRate:(double)a0 channelLayout:(id)a1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initStandardFormatWithSampleRate:(double)a0 channels:(unsigned int)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCommonFormat:(unsigned long long)a0 sampleRate:(double)a1 channels:(unsigned int)a2 interleaved:(BOOL)a3;
- (id)initWithCommonFormat:(unsigned long long)a0 sampleRate:(double)a1 interleaved:(BOOL)a2 channelLayout:(id)a3;
- (id)initWithCMAudioFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 channelLayout:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
