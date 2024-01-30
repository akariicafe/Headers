@class NSDictionary, NSString, NSSet;

@interface SelectedCheckboxFromIcon__generated__Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) NSDictionary *labelProbability;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithLabelProbability:(id)a0 label:(id)a1;

@end
