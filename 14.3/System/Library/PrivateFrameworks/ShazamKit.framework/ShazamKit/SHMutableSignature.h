@class SHEntitlements, AVAudioFormat, SigX;

@interface SHMutableSignature : SHSignature

@property (class, readonly, nonatomic) SHEntitlements *entitlements;

@property (retain, nonatomic) AVAudioFormat *format;
@property (retain, nonatomic) SigX *sigX;
@property (nonatomic) unsigned int currentFrameCount;
@property (readonly, nonatomic) long long clipStyle;
@property (readonly, nonatomic) double maximumSeconds;

+ (BOOL)supportsSecureCoding;

- (double)length;
- (id)init;
- (void).cxx_destruct;
- (int)signatureType;
- (long long)currentPosition;
- (BOOL)append:(id)a0 atTime:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)generate:(id *)a0;
- (id)dataRepresentation;
- (id)debugDescription;
- (void)configureWithFormat:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMaximumSeconds:(double)a0 clipStyle:(long long)a1;
- (BOOL)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;
- (void)performSignatureGenerationEntitlementCheck;
- (id)clipExcessAudio:(id)a0;
- (double)secondsFromFrameCount:(unsigned int)a0 forFormat:(id)a1;

@end
