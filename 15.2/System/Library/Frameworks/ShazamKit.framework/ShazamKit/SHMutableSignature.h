@class AVAudioFormat, SigX;

@interface SHMutableSignature : SHSignature

@property (retain, nonatomic) AVAudioFormat *format;
@property (retain, nonatomic) SigX *sigX;
@property (nonatomic) unsigned int currentFrameCount;
@property (readonly, nonatomic) long long clipStyle;
@property (readonly, nonatomic) double maximumSeconds;

+ (BOOL)supportsSecureCoding;

- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;
- (long long)currentPosition;
- (int)signatureType;
- (void).cxx_destruct;
- (double)duration;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)configureWithFormat:(id)a0;
- (id)generate:(id *)a0;
- (BOOL)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;
- (id)initWithMaximumSeconds:(double)a0 clipStyle:(long long)a1;
- (id)clipExcessAudio:(id)a0;
- (double)secondsFromFrameCount:(unsigned int)a0 forFormat:(id)a1;

@end
