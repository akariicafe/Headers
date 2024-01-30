@class NSSet;

@interface SignificantActivityInput : NSObject <MLFeatureProvider>

@property (nonatomic) struct __CVBuffer { } *image__Placeholder__0;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void)dealloc;
- (id)initWithImage__Placeholder__0:(struct __CVBuffer { } *)a0;
- (id)initWithImage__Placeholder__0FromCGImage:(struct CGImage { } *)a0 error:(id *)a1;
- (id)initWithImage__Placeholder__0AtURL:(id)a0 error:(id *)a1;
- (BOOL)setImage__Placeholder__0WithCGImage:(struct CGImage { } *)a0 error:(id *)a1;
- (BOOL)setImage__Placeholder__0WithURL:(id)a0 error:(id *)a1;

@end
