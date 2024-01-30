@interface PXPhotoKitPeopleSuggestionsMediaProvider : PXPeopleSuggestionsMediaProvider

- (void)cancelRequest:(int)a0;
- (int)requestImageForPersonSuggestion:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 cropFactor:(unsigned long long)a3 style:(unsigned long long)a4 completionBlock:(id /* block */)a5;

@end
