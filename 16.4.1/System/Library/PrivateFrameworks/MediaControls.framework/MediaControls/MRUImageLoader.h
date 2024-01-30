@class UIView, MPArtworkCatalog;
@protocol MPArtworkDataSourceVisualIdenticality;

@interface MRUImageLoader : NSObject

@property (retain, nonatomic) MPArtworkCatalog *catalog;
@property (retain, nonatomic) id<MPArtworkDataSourceVisualIdenticality> lastLoadedArtworkIdentifier;
@property (nonatomic) struct CGSize { double width; double height; } effectiveScaledFittingSizeForConfiguration;
@property (nonatomic) struct CGSize { double width; double height; } lastVendedScaledFittingSize;
@property (retain, nonatomic) id<MPArtworkDataSourceVisualIdenticality> lastFailedArtworkIdentifier;
@property (nonatomic) long long failedLoadingCount;
@property (nonatomic) struct CGSize { double width; double height; } fittingSize;
@property (nonatomic) double scale;
@property (nonatomic) long long state;
@property (readonly, weak, nonatomic) UIView *destination;
@property (readonly, nonatomic) id /* block */ imageHandler;
@property (nonatomic) BOOL cacheImages;
@property (nonatomic) BOOL formatImages;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })scaledFittingSize;
- (void)configureCatalog;
- (id)initWithDestination:(id)a0 imageHandler:(id /* block */)a1;
- (void)updateCatalog:(id)a0;
- (void)updateFittingSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (BOOL)vendCachedImageIfPossible;
- (BOOL)wouldLoadNewImageForCatalog:(id)a0;

@end
