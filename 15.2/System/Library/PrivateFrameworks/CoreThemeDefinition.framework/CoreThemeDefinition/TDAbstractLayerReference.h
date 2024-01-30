@class NSString, NSNumber;

@interface TDAbstractLayerReference : NSManagedObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameRect;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *frameRectString;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameRect;
@property (retain, nonatomic) NSNumber *opacity;
@property (retain, nonatomic) NSNumber *blendMode;
@property (nonatomic) BOOL makeOpaqueIfPossible;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } primitiveFrameRect;

- (void)awakeFromFetch;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRect;
- (void)setFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
