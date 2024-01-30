@class NSSet;

@interface MonzaV4_1Input : NSObject <MLFeatureProvider>

@property (nonatomic) struct __CVBuffer { } *inputImage;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void)dealloc;
- (BOOL)setInputImageWithCGImage:(struct CGImage { } *)a0 error:(id *)a1;
- (id)initWithInputImage:(struct __CVBuffer { } *)a0;
- (id)initWithInputImageAtURL:(id)a0 error:(id *)a1;
- (id)initWithInputImageFromCGImage:(struct CGImage { } *)a0 error:(id *)a1;
- (BOOL)setInputImageWithURL:(id)a0 error:(id *)a1;

@end
