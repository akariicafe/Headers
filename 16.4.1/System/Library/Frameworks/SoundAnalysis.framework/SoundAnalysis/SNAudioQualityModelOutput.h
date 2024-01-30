@class NSDictionary, NSString, NSSet;

@interface SNAudioQualityModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) NSDictionary *final_output;
@property (retain, nonatomic) NSString *classLabel;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFinal_output:(id)a0 classLabel:(id)a1;

@end
