@class CIImage;

@interface AXMVisionScreenRecognitionOptions : AXMVisionAnalysisOptions

@property (retain, nonatomic) CIImage *testingImage;
@property (nonatomic) BOOL disableCoagulator;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fullRect;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL isRTL;

- (void).cxx_destruct;

@end
