@class NSArray;

@interface AXMVisionFeatureColorInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *mainColors;
@property (retain, nonatomic) NSArray *mainColorWeights;
@property (nonatomic) double remainingColorWeight;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setMainColors:(id)a0 weights:(id)a1;
- (void)enumerateMainColors:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
