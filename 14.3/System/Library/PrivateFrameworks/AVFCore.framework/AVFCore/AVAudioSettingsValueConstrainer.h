@class NSArray, NSMutableArray;

@interface AVAudioSettingsValueConstrainer : NSObject {
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _inputASBD;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _outputASBD;
    struct OpaqueAudioConverter { } *_audioConverter;
    unsigned int _outputDataRate;
    BOOL _needNewConverter;
    BOOL _needAvailableSampleRates;
    BOOL _needApplicableParameters;
    NSArray *_availableOutputSampleRates;
    NSMutableArray *_availableOutputDataRates;
    NSMutableArray *_applicableOutputSampleRatesForDataRate;
    NSMutableArray *_applicableOutputDataRatesForSampleRate;
}

@property (nonatomic) float outputSampleRate;
@property (nonatomic) unsigned int outputFormat;
@property (nonatomic) unsigned int outputFormatFlags;
@property (nonatomic) unsigned int outputBitsPerChannel;
@property (nonatomic) unsigned int outputChannelCount;
@property (nonatomic) unsigned int outputDataRate;

- (unsigned int)availableOutputChannelCountForDesiredChannelCount:(unsigned int)a0 rounding:(long long)a1;
- (void)_buildAvailableSampleRates;
- (id)init;
- (id)_fetchApplicableOutputDataRates;
- (void)dealloc;
- (float)applicableOutputSampleRateForDesiredSampleRate:(float)a0 rounding:(long long)a1;
- (void)_buildAudioConverter;
- (void)_buildApplicableDataRatesForSampleRates;
- (float)_getAvailableOutputSampleRateFor:(float)a0 rounding:(long long)a1;
- (void)_bringUpToDate;
- (void)setInputPropertiesFromASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;

@end
