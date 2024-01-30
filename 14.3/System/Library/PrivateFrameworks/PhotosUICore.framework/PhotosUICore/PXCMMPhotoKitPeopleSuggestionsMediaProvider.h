@interface PXCMMPhotoKitPeopleSuggestionsMediaProvider : PXCMMPeopleSuggestionsMediaProvider

- (void)cancelRequest:(int)a0;
- (int)requestImageForPersonSuggestion:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 cropFactor:(unsigned long long)a2 style:(unsigned long long)a3 completionBlock:(id /* block */)a4;

@end
