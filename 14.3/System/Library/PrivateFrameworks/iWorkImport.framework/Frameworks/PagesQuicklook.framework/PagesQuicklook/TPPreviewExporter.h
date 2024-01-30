@class NSString, TSUProgress;

@interface TPPreviewExporter : TPRenderingExporter <TSKImageExporter>

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) BOOL scaleToFit;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unscaledClipRect;
@property (readonly, nonatomic) double progressForCurrentPage;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (nonatomic) BOOL paginate;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) TSUProgress *progress;
@property (readonly, nonatomic) BOOL needsSupplementalFiles;
@property (copy, nonatomic) NSString *typeUTI;
@property (readonly, nonatomic) NSString *savePanelMessage;
@property (readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property (readonly, nonatomic) BOOL isExportSupported;
@property (readonly, nonatomic) BOOL canExportInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_renderingExporterDelegate;

@end
