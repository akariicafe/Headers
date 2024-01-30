@class NSNumber;

@interface PAEKeyerLumaSetup : NSObject <NSCoding> {
    NSNumber *_lumA;
    NSNumber *_lumB;
    NSNumber *_lumC;
    NSNumber *_lumD;
}

- (id)init;
- (float)lumA;
- (float)lumB;
- (float)lumC;
- (float)lumD;
- (void)dealloc;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (void)setLumA:(float)a0;
- (void)setLumB:(float)a0;
- (void)setLumC:(float)a0;
- (void)setLumD:(float)a0;
- (void)setLumANumber:(id)a0;
- (void)setLumBNumber:(id)a0;
- (void)setLumCNumber:(id)a0;
- (void)setLumDNumber:(id)a0;

@end
