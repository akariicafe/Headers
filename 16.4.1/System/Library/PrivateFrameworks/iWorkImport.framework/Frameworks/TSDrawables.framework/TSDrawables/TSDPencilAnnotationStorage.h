@class NSDate, TSUImage, NSArray, NSData, PKDrawing, TSKPKDrawing, TSUBezierPath, NSString, TSPData, TSUColor;
@protocol TSKPencilAnnotationStorage;

@interface TSDPencilAnnotationStorage : TSPObject <TSKPencilAnnotationStorage>

@property (nonatomic) long long attachedLocation;
@property (nonatomic) long long attachedType;
@property (nonatomic) struct CGPoint { double x; double y; } markupOffset;
@property (nonatomic) struct CGSize { double width; double height; } originalAttachedSize;
@property (nonatomic) double percentOfPAContainedInParentRep;
@property (nonatomic) unsigned long long textBaselinesTouchedCount;
@property (nonatomic) unsigned long long visibleStrokesCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unscaledBoundsOfStrokes;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } strokePointsFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderedFrame;
@property (retain, nonatomic) TSKPKDrawing *drawing;
@property (retain, nonatomic) PKDrawing *drawingForTextRecognition;
@property (readonly, nonatomic) TSPData *encodedDrawingTSPData;
@property (readonly, nonatomic) TSPData *legacyEncodedDrawingTSPData;
@property (retain, nonatomic) NSArray *subStorages;
@property (weak, nonatomic) id<TSKPencilAnnotationStorage> parentStorage;
@property (nonatomic) double pencilAnnotationDrawingScale;
@property (readonly, nonatomic) TSUImage *rasterizedImage;
@property (readonly, nonatomic) TSPData *rasterizedImageTSPData;
@property (readonly, nonatomic) NSData *encodedDrawing;
@property (readonly, nonatomic) NSData *legacyEncodedDrawing;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) TSUBezierPath *unscaledPath;
@property (readonly, nonatomic) struct CGPath { } *path;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unscaledStrokePointsFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unscaledRenderedFrame;
@property (readonly, nonatomic) BOOL shouldResizeWithAnchor;
@property (readonly, nonatomic) BOOL shouldSplitAcrossAnchorRects;
@property (readonly, nonatomic) BOOL shouldUseHeadTail;
@property (readonly, nonatomic) BOOL shouldResizeInOneDirection;
@property (readonly, nonatomic) BOOL shouldInvertStretchAxis;
@property (readonly, nonatomic) TSUColor *penColor;
@property (readonly, nonatomic) long long toolType;
@property (readonly, nonatomic) BOOL shouldShowAnchorRect;
@property (readonly, nonatomic) BOOL needsTextRecognition;
@property (readonly, nonatomic) BOOL isCalloutLine;
@property (readonly, nonatomic) BOOL isCalloutMarginAnnotation;
@property (readonly, nonatomic) BOOL isCalloutParentStorage;
@property (nonatomic) long long compoundAnnotationType;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transformFromUnscaledCanvasToStroke;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transformFromStrokeToUnscaledCanvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_rasterizedTSPDataForPencilAnnotationImage:(id)a0 context:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertStrokeRectToUnscaledCanvas:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertStrokeToUnscaledCanvasPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })convertStrokeToUnscaledCanvasSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertUnscaledCanvasToStrokePoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertUnscaledCanvasToStrokeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })convertUnscaledCanvasToStrokeSize:(struct CGSize { double x0; double x1; })a0;
- (id)initFromSOSWithContext:(id)a0 markupOffset:(struct CGPoint { double x0; double x1; })a1 rasterizedImageTSPData:(id)a2 attachedLocation:(long long)a3 attachedType:(long long)a4 encodedDrawing:(id)a5 legacyEncodedDrawing:(id)a6 path:(struct CGPath { } *)a7 unscaledBoundsOfStrokes:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a8 originalAttachedSize:(struct CGSize { double x0; double x1; })a9 percentOfPAContainedInParentRep:(double)a10 textBaselinesTouchedCount:(unsigned long long)a11 visibleStrokesCount:(unsigned long long)a12 penColor:(id)a13 toolType:(long long)a14 compoundAnnotationType:(long long)a15 subStorages:(id)a16 creationDate:(id)a17 pencilAnnotationDrawingScale:(double)a18 strokePointsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a19 renderedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a20;
- (id)initWithContext:(id)a0 drawing:(id)a1 markupOffset:(struct CGPoint { double x0; double x1; })a2 rasterizedImage:(id)a3 attachedLocation:(long long)a4 attachedType:(long long)a5 path:(struct CGPath { } *)a6 unscaledBoundsOfStrokes:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 originalAttachedSize:(struct CGSize { double x0; double x1; })a8 percentOfPAContainedInParentRep:(double)a9 textBaselinesTouchedCount:(unsigned long long)a10 visibleStrokesCount:(unsigned long long)a11 penColor:(id)a12 toolType:(long long)a13 compoundAnnotationType:(long long)a14 subStorages:(id)a15 creationDate:(id)a16 pencilAnnotationDrawingScale:(double)a17;
- (id)initWithContext:(id)a0 drawing:(id)a1 markupOffset:(struct CGPoint { double x0; double x1; })a2 rasterizedImageTSPData:(id)a3 attachedLocation:(long long)a4 attachedType:(long long)a5 encodedDrawing:(id)a6 legacyEncodedDrawing:(id)a7 path:(struct CGPath { } *)a8 unscaledBoundsOfStrokes:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a9 originalAttachedSize:(struct CGSize { double x0; double x1; })a10 percentOfPAContainedInParentRep:(double)a11 textBaselinesTouchedCount:(unsigned long long)a12 visibleStrokesCount:(unsigned long long)a13 penColor:(id)a14 toolType:(long long)a15 compoundAnnotationType:(long long)a16 subStorages:(id)a17 creationDate:(id)a18 pencilAnnotationDrawingScale:(double)a19 strokePointsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a20 renderedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a21;
- (void)initializeTextRecognition;
- (BOOL)isStretchableParagraphAnnotation;
- (BOOL)p_isSubStorage;
- (void)setRasterizedImageTSPData:(id)a0;

@end
