@class PFPosterMedia, PIParallaxStyle, NSURL, NSError, PFPosterEditConfiguration;
@protocol PISegmentationItem, PISegmentationLoading;

@interface PUWallpaperShuffleResourceExportOperation : PXAsyncOperation

@property (copy, nonatomic) PFPosterMedia *posterMedia;
@property (copy, nonatomic) PFPosterEditConfiguration *editConfiguration;
@property (retain, nonatomic) PIParallaxStyle *style;
@property (retain, nonatomic) PIParallaxStyle *persistedStyle;
@property (retain, nonatomic) NSURL *sourceDirectory;
@property (retain, nonatomic) NSURL *exportDirectory;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) id<PISegmentationItem> segmentationItem;
@property (retain) id<PISegmentationLoading> exportTask;
@property (retain) NSError *error;

- (void)cancel;
- (void).cxx_destruct;
- (void)px_finishIfPossible;
- (BOOL)px_shouldWaitForCancel;
- (void)px_start;
- (BOOL)_canExportFromDirectory;
- (BOOL)_exportFromDirectory;
- (void)_handleExportCompletion:(id)a0;
- (BOOL)_tryExportFromDirectory;

@end
