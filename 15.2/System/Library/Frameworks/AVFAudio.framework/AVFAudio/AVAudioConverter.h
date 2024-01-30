@class NSString, NSArray, NSData, AVAudioFormat;

@interface AVAudioConverter : NSObject {
    void *_impl;
}

@property (nonatomic) long long bitRate;
@property (retain, nonatomic) NSString *bitRateStrategy;
@property (readonly, nonatomic) long long maximumOutputPacketSize;
@property (readonly, nonatomic) NSArray *availableEncodeBitRates;
@property (readonly, nonatomic) NSArray *applicableEncodeBitRates;
@property (readonly, nonatomic) NSArray *availableEncodeSampleRates;
@property (readonly, nonatomic) NSArray *applicableEncodeSampleRates;
@property (readonly, nonatomic) NSArray *availableEncodeChannelLayoutTags;
@property (readonly, nonatomic) AVAudioFormat *inputFormat;
@property (readonly, nonatomic) AVAudioFormat *outputFormat;
@property (retain, nonatomic) NSArray *channelMap;
@property (retain, nonatomic) NSData *magicCookie;
@property (nonatomic) BOOL downmix;
@property (nonatomic) BOOL dither;
@property (nonatomic) long long sampleRateConverterQuality;
@property (retain, nonatomic) NSString *sampleRateConverterAlgorithm;
@property (nonatomic) long long primeMethod;
@property (nonatomic) struct AVAudioConverterPrimeInfo { unsigned int x0; unsigned int x1; } primeInfo;

- (void)dealloc;
- (void)reset;
- (long long)convertToBuffer:(id)a0 error:(id *)a1 withInputFromBlock:(id /* block */)a2;
- (id)initFromFormat:(id)a0 toFormat:(id)a1;
- (BOOL)convertToBuffer:(id)a0 fromBuffer:(id)a1 error:(id *)a2;

@end
