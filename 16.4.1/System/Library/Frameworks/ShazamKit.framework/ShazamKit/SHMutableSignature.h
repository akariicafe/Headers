@class AVAudioFormat, SHAudioConverter, SigX;

@interface SHMutableSignature : SHSignature

@property (retain, nonatomic) AVAudioFormat *format;
@property (retain, nonatomic) SigX *sigX;
@property (nonatomic) unsigned int currentFrameCount;
@property (readonly, nonatomic) SHAudioConverter *audioConverter;
@property (readonly, nonatomic) long long clipStyle;
@property (readonly, nonatomic) double maximumSeconds;

+ (BOOL)supportsSecureCoding;

- (long long)currentPosition;
- (void)encodeWithCoder:(id)a0;
- (int)signatureType;
- (id)dataRepresentation;
- (id)initWithCoder:(id)a0;
- (double)duration;
- (id)init;
- (void).cxx_destruct;
- (id)generate:(id *)a0;
- (void)configureWithFormat:(id)a0;
- (BOOL)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;
- (id)clipExcessAudio:(id)a0;
- (id)initWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2 error:(id *)a3;
- (id)initWithMaximumSeconds:(double)a0 clipStyle:(long long)a1;
- (double)secondsFromFrameCount:(unsigned int)a0 forFormat:(id)a1;

@end
