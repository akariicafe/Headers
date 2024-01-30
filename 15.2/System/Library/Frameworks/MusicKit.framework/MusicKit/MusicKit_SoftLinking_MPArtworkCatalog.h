@class MPArtworkCatalog;

@interface MusicKit_SoftLinking_MPArtworkCatalog : NSObject {
    MPArtworkCatalog *_underlyingArtworkCatalog;
}

@property (nonatomic) struct CGSize { double x0; double x1; } fittingSize;

+ (id)artworkCatalogWithDataSourceShortDescription:(id)a0 dataSourceIdentifier:(id)a1 tokenParameters:(id)a2;

- (void).cxx_destruct;
- (id)_initWithUnderlyingArtworkCatalog:(id)a0;
- (void)requestImageDataWithCompletion:(id /* block */)a0;

@end
