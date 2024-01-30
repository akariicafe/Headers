@class NSMutableDictionary;

@interface TSKPKFactory : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *recognizers;

+ (void)initialize;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1 weight:(double)a2;
+ (id)canvasViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)imageRendererWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (id)inkIdentifierForToolType:(long long)a0;
+ (BOOL)modernPencilKitAvailable;
+ (BOOL)pencilKitAvailable;
+ (id)recognizerWithType:(int)a0 mode:(int)a1;
+ (long long)toolTypeForInkIdentifier:(id)a0;
+ (BOOL)usingLegacyPencilKit;

@end
