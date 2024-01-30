@class NSCache;

@interface _SFFaviconProvider : WBSFaviconProvider {
    NSCache *_monogramTitleToImageCache;
}

- (id)initWithPersistenceBaseURL:(id)a0 persistenceName:(id)a1 preferredIconSize:(struct CGSize { double x0; double x1; })a2 atScale:(double)a3 allScales:(id)a4 isReadOnly:(BOOL)a5 shouldCheckIntegrityWhenOpeningDatabaseBlock:(id /* block */)a6;
- (void).cxx_destruct;
- (id)fallbackIconForRequest:(id)a0;

@end
