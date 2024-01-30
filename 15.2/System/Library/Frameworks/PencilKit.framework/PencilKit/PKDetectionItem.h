@class UIColor, PKRecognitionSessionManager, UIBezierPath, PKDetectionQueryItem, NSUUID, PKDrawing;

@interface PKDetectionItem : NSObject

@property (retain, nonatomic) PKDetectionQueryItem *queryItem;
@property (retain, nonatomic) UIBezierPath *boundsPath;
@property (retain, nonatomic) UIBezierPath *baselinePath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } strokeBounds;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *inkColor;
@property (weak, nonatomic) PKRecognitionSessionManager *sessionManager;
@property (retain, nonatomic) NSUUID *cachedUUID;
@property (nonatomic) BOOL validCachedUUID;
@property (weak, nonatomic) PKDrawing *drawing;
@property (readonly, nonatomic) UIColor *strokeColor;

- (id)UUID;
- (id)_strokes;
- (id)initWithSessionManager:(id)a0;
- (void).cxx_destruct;
- (id)image;
- (id)setUUID:(id)a0;
- (id)_baselinePath;
- (void)_generatePaths;
- (id)_actionNameForActivation:(BOOL)a0;

@end
