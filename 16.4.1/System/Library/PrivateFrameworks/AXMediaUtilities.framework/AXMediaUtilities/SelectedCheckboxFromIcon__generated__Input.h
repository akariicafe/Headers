@class NSSet;

@interface SelectedCheckboxFromIcon__generated__Input : NSObject <MLFeatureProvider>

@property (nonatomic) struct __CVBuffer { } *image;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithImage:(struct __CVBuffer { } *)a0;

@end
