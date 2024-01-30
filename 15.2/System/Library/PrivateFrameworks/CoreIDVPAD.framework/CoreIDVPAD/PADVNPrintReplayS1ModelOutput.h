@class MLMultiArray, NSSet;

@interface PADVNPrintReplayS1ModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *confidence;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithConfidence:(id)a0;
- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;

@end
