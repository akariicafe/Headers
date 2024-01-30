@class NSArray, MLMultiArray, NSSet, NSString;

@interface CRTextSequenceRecognizerModelCoreMLOutput : NSObject <MLFeatureProvider, CRTextRecognizerModelOutput>

@property (retain) NSArray *textFeatureInfo;
@property (retain, nonatomic) MLMultiArray *output_label_prob_map;
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithOutput_label_prob_map:(id)a0;

@end
