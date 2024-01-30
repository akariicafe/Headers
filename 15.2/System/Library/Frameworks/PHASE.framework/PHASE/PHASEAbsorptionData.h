@class NSArray;

@interface PHASEAbsorptionData : NSObject

@property (readonly, nonatomic) NSArray *absorptionCoefficients;

+ (id)new;
+ (id)objectForDefault;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAbsorptionCoefficients:(id)a0;
- (id)initWithAbsorptionCoefficients:(id)a0 frequencyBands:(id)a1;

@end
