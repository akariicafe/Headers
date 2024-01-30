@class NSArray;

@interface PHASESoundReductionIndex : NSObject

@property (readonly, nonatomic) NSArray *attenuationCoefficients;
@property (readonly, nonatomic) float measuredDepth;

+ (id)new;
+ (id)objectForDefault;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAttenuationCoefficients:(id)a0 measuredDepth:(float)a1;
- (id)initWithSoundReductionIndices:(id)a0 frequencyBands:(id)a1 measuredDepth:(float)a2;

@end
