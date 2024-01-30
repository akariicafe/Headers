@class VKCTextRecognitionResult, VKCImageAnalysisResult, NSString;
@protocol VKCImageBaseOverlayViewDelegate;

@interface VKCImageBaseOverlayView : VKPlatformView

@property (weak, nonatomic) id<VKCImageBaseOverlayViewDelegate> baseDelegate;
@property (retain, nonatomic) VKCTextRecognitionResult *recognitionResult;
@property (readonly, nonatomic) VKCImageAnalysisResult *analysisResult;
@property (copy, nonatomic) NSString *customAnalyticsIdentifier;
@property (readonly, nonatomic) BOOL isPublicAPI;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedVisibleRect;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSelectionRectsForWindowChange;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })normalizedPointFromViewPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)normalizedQuadFromViewQuad:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedRectFromViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)normalizedVisibleRectDidChange;
- (struct CGPoint { double x0; double x1; })viewPointFromNormalizedPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)viewQuadFromNormalizedQuad:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewRectFromNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
