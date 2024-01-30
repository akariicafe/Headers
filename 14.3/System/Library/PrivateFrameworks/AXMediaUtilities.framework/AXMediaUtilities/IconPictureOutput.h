@class NSString, NSDictionary, NSSet;

@interface IconPictureOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSDictionary *labelProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 labelProbability:(id)a1;

@end
