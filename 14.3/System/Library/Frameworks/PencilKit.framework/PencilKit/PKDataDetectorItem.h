@class UIColor, PKRecognitionSessionManager, UIBezierPath, PKDataDetectorQueryItem, DDScannerResult;

@interface PKDataDetectorItem : NSObject

@property (retain, nonatomic) PKDataDetectorQueryItem *dataDetectorQueryItem;
@property (retain, nonatomic) UIBezierPath *boundsPath;
@property (retain, nonatomic) UIBezierPath *baselinePath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } strokeBounds;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *inkColor;
@property (readonly, weak, nonatomic) PKRecognitionSessionManager *sessionManager;
@property (readonly, nonatomic) UIColor *strokeColor;
@property (readonly, nonatomic) DDScannerResult *scannerResult;
@property (readonly, nonatomic) struct __DDResult { } *coreResult;

+ (BOOL)canUseDataDetectorQueryItem:(id)a0 inDrawing:(id)a1;

- (void).cxx_destruct;
- (id)_strokes;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (void)_generatePaths;
- (id)initWithDataDetectorQueryItem:(id)a0 sessionManager:(id)a1;

@end
