@class UISVectorGlyphDrawing, NSString, UISTextLineDrawing, UISSlotStyle, CLLocationButtonTag;

@interface CLLocationButtonDrawing : NSObject <UISDrawing> {
    CLLocationButtonTag *_currentTag;
    UISSlotStyle *_style;
    BOOL _remote;
}

@property (nonatomic) struct CGSize { double width; double height; } engravedSize;
@property (nonatomic) struct CGSize { double width; double height; } neededSize;
@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) UISTextLineDrawing *textDrawing;
@property (retain, nonatomic) UISVectorGlyphDrawing *glyphDrawing;
@property (readonly, nonatomic) unsigned int secureName;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawingSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_drawingWithStyle:(id)a0 tag:(id)a1 remote:(BOOL)a2;

@end
