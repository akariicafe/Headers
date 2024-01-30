@class NSSet;

@interface iconclassificationInput : NSObject <MLFeatureProvider>

@property (nonatomic) struct __CVBuffer { } *image_Placeholder;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void)dealloc;
- (id)initWithImage_Placeholder:(struct __CVBuffer { } *)a0;
- (id)initWithImage_PlaceholderAtURL:(id)a0 error:(id *)a1;
- (id)initWithImage_PlaceholderFromCGImage:(struct CGImage { } *)a0 error:(id *)a1;
- (BOOL)setImage_PlaceholderWithCGImage:(struct CGImage { } *)a0 error:(id *)a1;
- (BOOL)setImage_PlaceholderWithURL:(id)a0 error:(id *)a1;

@end
