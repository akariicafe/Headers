@class NSString;

@interface PFParallaxLayer : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *image;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) double zPosition;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly, nonatomic) BOOL isBackground;
@property (readonly, nonatomic) BOOL isBackfill;
@property (readonly, nonatomic) BOOL isInactive;
@property (readonly, nonatomic) BOOL isDebug;

+ (id)imageLayer:(struct __CVBuffer { } *)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zPosition:(double)a2 identifier:(id)a3;

- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithImage:(struct __CVBuffer { } *)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zPosition:(double)a2 identifier:(id)a3;

@end
