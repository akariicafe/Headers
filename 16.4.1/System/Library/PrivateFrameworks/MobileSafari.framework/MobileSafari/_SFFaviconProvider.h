@class UIImage, NSCache;

@interface _SFFaviconProvider : WBSFaviconProvider {
    NSCache *_monogramTitleToImageCache;
}

@property (class, readonly, nonatomic) UIImage *fallbackFavicon;
@property (class, readonly, nonatomic) UIImage *favoritesFavicon;
@property (class, readonly, nonatomic) UIImage *bookmarksFavicon;
@property (class, readonly, nonatomic) UIImage *historyFavicon;
@property (class, readonly, nonatomic) UIImage *readingListFavicon;
@property (class, readonly, nonatomic) UIImage *sharedWithYouFavicon;

+ (id)_faviconWithSystemImageNamed:(id)a0;

- (void).cxx_destruct;
- (id)fallbackIconForRequest:(id)a0;
- (id)initWithPersistenceBaseURL:(id)a0 persistenceName:(id)a1 preferredIconSize:(struct CGSize { double x0; double x1; })a2 atScale:(double)a3 allScales:(id)a4 isReadOnly:(BOOL)a5 shouldCheckIntegrityWhenOpeningDatabaseBlock:(id /* block */)a6;

@end
