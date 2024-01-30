@class NSDictionary, NSString, NSSet;

@interface iconclassification__generated__Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) NSDictionary *output1;
@property (retain, nonatomic) NSString *classLabel;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithOutput1:(id)a0 classLabel:(id)a1;

@end
