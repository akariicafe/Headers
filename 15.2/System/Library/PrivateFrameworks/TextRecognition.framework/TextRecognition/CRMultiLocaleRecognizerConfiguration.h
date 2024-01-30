@class NSOrderedSet;

@interface CRMultiLocaleRecognizerConfiguration : CRRecognizerConfiguration

@property (readonly) NSOrderedSet *languages;

- (id)textFeatureFilter;
- (id)initWithImageReaderOptions:(id)a0 error:(id *)a1;
- (id)initV1DefaultConfigWithOptions:(id)a0;
- (id)initV2DefaultConfigWithOptions:(id)a0;
- (id)initV3DefaultConfigWithOptions:(id)a0;
- (void).cxx_destruct;

@end
