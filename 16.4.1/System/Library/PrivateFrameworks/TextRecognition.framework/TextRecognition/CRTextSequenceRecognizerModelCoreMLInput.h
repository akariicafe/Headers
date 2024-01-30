@class NSArray, MLMultiArray, NSSet, NSString;

@interface CRTextSequenceRecognizerModelCoreMLInput : NSObject <MLFeatureProvider, CRTextRecognizerModelInput>

@property (retain, nonatomic) MLMultiArray *img_input;
@property (retain) NSArray *textFeatureInfo;
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithImg_input:(id)a0 featureInfo:(id)a1;

@end
