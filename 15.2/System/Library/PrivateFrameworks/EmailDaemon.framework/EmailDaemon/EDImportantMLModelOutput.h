@class NSDictionary, NSSet;

@interface EDImportantMLModelOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long important;
@property (retain, nonatomic) NSDictionary *importantProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithImportant:(long long)a0 importantProbability:(id)a1;

@end
