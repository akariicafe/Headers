@class NSDictionary, UIImage, PMTitleSubtitleView;

@interface MiroExportController : ReaderWriterExportController

@property (retain, nonatomic) PMTitleSubtitleView *titleView;
@property (copy, nonatomic) NSDictionary *titleInformation;
@property (retain, nonatomic) UIImage *posterImage;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)thumbnailImage;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })exportSize;
- (id)titleLayerForVideoComposition:(id)a0;
- (void)createMovieController;
- (void)_setupMovieController;
- (id)_compositionForExport;

@end
