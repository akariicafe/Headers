@class SHMutableSignature;

@interface SHSignatureGenerator : NSObject

@property (retain, nonatomic) SHMutableSignature *mutableSignature;

+ (void)generateSignatureFromAsset:(id)a0 completionHandler:(id /* block */)a1;

- (id)signature;
- (double)duration;
- (double)maximumDuration;
- (id)init;
- (void).cxx_destruct;
- (BOOL)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;
- (id)initSignatureRingBufferWithDuration:(double)a0;
- (id)initWithMaximumSignatureDuration:(double)a0;

@end
