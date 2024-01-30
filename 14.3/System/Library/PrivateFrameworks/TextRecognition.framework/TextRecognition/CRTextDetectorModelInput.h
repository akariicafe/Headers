@class NSSet;

@interface CRTextDetectorModelInput : NSObject <MLFeatureProvider>

@property (nonatomic) struct __CVBuffer { } *data;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithData:(struct __CVBuffer { } *)a0;

@end
