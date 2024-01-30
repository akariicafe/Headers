@interface TSKFractionFormat : TSKFormat <NSCopying>

@property (readonly, nonatomic) int fractionAccuracy;
@property (readonly, nonatomic) BOOL usePlusSign;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFormatType:(unsigned int)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)asFractionFormat;
- (id)initWithFractionAccuracy:(int)a0;

@end
