@class SHMutableSignature;

@interface SHSignatureGenerator : NSObject

@property (retain, nonatomic) SHMutableSignature *mutableSignature;

+ (id)signatureFromAudioFile:(id)a0 error:(id *)a1;

- (id)signature;
- (void).cxx_destruct;
- (id)init;
- (BOOL)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;

@end
