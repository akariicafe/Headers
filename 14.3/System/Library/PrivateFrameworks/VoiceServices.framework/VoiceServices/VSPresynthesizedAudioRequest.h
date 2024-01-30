@class NSString, NSData;

@interface VSPresynthesizedAudioRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *clientBundleIdentifier;
@property (nonatomic) unsigned long long pcmDataSize;
@property (copy, nonatomic) id /* block */ stopHandler;
@property (nonatomic) unsigned int audioSessionID;
@property (readonly, copy, nonatomic) NSData *audioData;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } decoderStreamDescription;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } playerStreamDescription;
@property (nonatomic) BOOL enqueue;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long requestCreatedTimestamp;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)canLogRequestText;
- (id)initWithAudioData:(id)a0 decoderStreamDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 playerStreamDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a2;
- (id)initWithAudioData:(id)a0 playerStreamDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;
- (BOOL)isValid;
- (id)initWithCoder:(id)a0;
- (id)logText;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
