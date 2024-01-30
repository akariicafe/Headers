@class UIViewController, NSString, PXCuratedLibraryAssetsDataSourceManager, NSMutableArray, PXGView;

@interface PXGViewSnapshotDiagnosticsService : PXDiagnosticsService <UIDocumentInteractionControllerDelegate>

@property (readonly, nonatomic) PXGView *gridView;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) NSMutableArray *images;
@property (retain, nonatomic) NSMutableArray *imageURLs;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastScrollViewBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_writeImageToDisk:(id)a0 suffix:(id)a1;
+ (id)_mergeImagesFromArray:(id)a0;
+ (id)_createPDFWithImagesAtURLs:(id)a0;
+ (id)_cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromImage:(id)a1;
+ (id)_snapshotImageFromView:(id)a0;
+ (id)_imageAtURL:(id)a0;

- (BOOL)canPerformAction;
- (id)title;
- (id)documentInteractionControllerViewControllerForPreview:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemProviders:(id)a0;
- (void)performAction;
- (void)_captureNextPage;
- (void)_stopCapture;
- (void)_mergeAllImagesAndWriteToDisk;

@end
