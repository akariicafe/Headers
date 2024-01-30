@class MLMultiArray, NSSet;

@interface PADVNPrintReplayS2ModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *score0_1;
@property (retain, nonatomic) MLMultiArray *embedding0_1;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithScore0_1:(id)a0 embedding0_1:(id)a1;

@end
