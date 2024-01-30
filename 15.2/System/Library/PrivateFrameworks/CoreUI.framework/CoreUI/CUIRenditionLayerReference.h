@class NSString, CUIRenditionKey;

@interface CUIRenditionLayerReference : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy, nonatomic) NSString *layerName;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (nonatomic) BOOL fixedFrame;
@property (nonatomic) BOOL makeOpaqueIfPossible;
@property (retain, nonatomic) CUIRenditionKey *referenceKey;

- (id)init;
- (void)dealloc;

@end
