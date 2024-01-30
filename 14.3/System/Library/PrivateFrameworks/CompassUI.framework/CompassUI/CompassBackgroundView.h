@class GLKView, NSString, CompassShader, EAGLContext, CompassAtlas;

@interface CompassBackgroundView : CompassRotatingView <GLKViewDelegate> {
    struct CGPoint { double x; double y; } _compassCenter;
    BOOL _shownInCompass;
    GLKView *_glView;
    EAGLContext *_context;
    CompassShader *_normalShader;
    CompassShader *_knockoutShader;
    CompassShader *_textureShader;
    CompassShader *_lineShader;
    union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } _modelViewMatrix;
    union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } _projectionMatrix;
    unsigned int _ticVertexArray;
    unsigned int _ticVertexBuffer;
    unsigned int _ticIndexBuffer;
    struct { float x0; float x1; float x2; float x3; float x4; float x5; struct { float x0; float x1; float x2; float x3; } x6; } *_ticPoints;
    unsigned int *_ticIndexes;
    unsigned int _labelsVertexArray;
    unsigned int _labelsVertexBuffer;
    unsigned int _labelsIndexBuffer;
    struct { float x0; float x1; float x2; float x3; struct { float x0; float x1; float x2; float x3; } x4; } *_labelsPoints;
    unsigned int *_labelsIndexes;
    unsigned int _otherLinesVertexArray;
    unsigned int _otherLinesVertexBuffer;
    unsigned int _otherLinesIndexBuffer;
    CompassAtlas *_imageAtlas;
    struct CGPoint { double x; double y; } _currentOffset;
}

@property (nonatomic) double ticRadius;
@property (readonly, nonatomic) double ticLength;
@property (nonatomic) double bearing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)glkView:(id)a0 drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupGL;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCompass:(BOOL)a1;
- (void)generateCompassPoints;
- (void)generateNumberAtlas;
- (void)tearDownGL;
- (void)renderCrosshairInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)positionLabelNamed:(id)a0 atDegrees:(long long)a1 fromCenter:(struct CGPoint { double x0; double x1; })a2 withRadius:(double)a3 vertexOffset:(unsigned long long)a4 color:(struct { float x0; float x1; float x2; float x3; })a5;
- (void)generateExtraLines;
- (void)positionLabels;
- (void)updateDisplay;
- (void)setCompassHeading:(double)a0;
- (BOOL)setCrosshairOffset:(struct CGSize { double x0; double x1; })a0;

@end
