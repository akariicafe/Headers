@class NSSet;

@interface PADVNPrintReplayS2ModelInput : NSObject <MLFeatureProvider>

@property (nonatomic) struct __CVBuffer { } *image;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithImage:(struct __CVBuffer { } *)a0;
- (id)featureValueForName:(id)a0;
- (void)dealloc;
- (id)initWithImageFromCGImage:(struct CGImage { } *)a0 error:(id *)a1;
- (id)initWithImageAtURL:(id)a0 error:(id *)a1;
- (BOOL)setImageWithCGImage:(struct CGImage { } *)a0 error:(id *)a1;
- (BOOL)setImageWithURL:(id)a0 error:(id *)a1;

@end
