@class UIImage;

@interface MPArtworkColorAnalyzer : NSObject

@property (readonly, nonatomic) long long algorithm;
@property (readonly, nonatomic) UIImage *image;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 algorithm:(long long)a1;
- (void)analyzeWithCompletionHandler:(id /* block */)a0;
- (id)_fallbackColorAnalysis;

@end
