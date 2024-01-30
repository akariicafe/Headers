@class NSString, NSArray, NSURL, AVAudioDeviceTestProcessingChain;

@interface AVAudioDeviceTestSequence : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL processSequenceAsynchronously;
@property (nonatomic) long long outputID;
@property (nonatomic) float volume;
@property (retain, nonatomic) NSURL *stimulusURL;
@property (retain, nonatomic) AVAudioDeviceTestProcessingChain *inputProcessingChain;
@property (retain, nonatomic) AVAudioDeviceTestProcessingChain *outputProcessingChain;
@property (nonatomic) long long outputMode;
@property (nonatomic) long long priority;
@property (retain) NSString *mode;
@property BOOL calculateCrossCorrelationPeak;
@property BOOL parallelCrossCorrelationCalculation;
@property (nonatomic) long long numberOfChannels;
@property (retain, nonatomic) NSArray *micBufferNumbers;
@property BOOL requiresBluetoothOutput;
@property (retain, nonatomic) NSString *microphone;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
