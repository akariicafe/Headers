@interface MSVArtworkColorAnalyzer : NSObject {
    struct CGImage { } *_sourceImage;
    long long _algorithm;
    struct CGSize { double width; double height; } _preferredImageSize;
}

+ (long long)algorithmWithMPColorAnalyzerAlgorithm:(long long)a0;

- (id)analyze;
- (void)analyzeWithCompletionHandler:(id /* block */)a0;
- (id)initWithSourceImage:(struct CGImage { } *)a0 algorithm:(long long)a1 preferredImageSize:(struct CGSize { double x0; double x1; })a2;

@end
