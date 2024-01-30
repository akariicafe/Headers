@class CUIPSDGradient, NSDictionary;

@interface CUIThemeSchemaRendition : CUIThemeRendition {
    NSDictionary *cuiInfo;
    unsigned long long _nimages;
    struct CGImage *_image[9];
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layoutRects[9];
    struct CGSize { double width; double height; } _intrinsicSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _elementRect;
    long long _columnSlices;
    long long _rowSlices;
    struct { double top; double left; double bottom; double right; } _contentInsets;
    CUIPSDGradient *_gradient;
}

@property (readonly, nonatomic) unsigned long long numberOfSlices;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *sliceRects;
@property (readonly, nonatomic) CUIPSDGradient *gradient;

- (unsigned short)presentationState;
- (double)scale;
- (id)slices;
- (unsigned short)direction;
- (unsigned short)layer;
- (void)dealloc;
- (unsigned short)value;
- (unsigned short)size;
- (struct { double x0; double x1; double x2; double x3; })contentInsets;
- (unsigned short)localization;
- (id)description;
- (unsigned short)appearance;
- (long long)rowSlices;
- (unsigned short)dimension1;
- (unsigned short)keyScale;
- (id)referenceImage;
- (unsigned short)dimension2;
- (unsigned short)drawingLayer;
- (id)stringForValue:(unsigned short)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectangle;
- (id)initWithCoreUIOptions:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })edgeInsets:(BOOL)a0;
- (id)coreUIOptions;
- (id)defaultTemplateName;
- (long long)columnSlices;
- (struct CGPoint { double x0; double x1; })renditionCoordinatesForPartFeatures:(long long)a0;
- (id)typeLocalizedString;
- (unsigned short)previousValue;
- (id)stateLocalizedString;
- (id)previousStateLocalizedString;
- (id)directionLocalizedString;
- (id)valueLocalizedString;
- (id)previousValueLocalizedString;
- (id)sizeLocalizedString;
- (id)presentationStateLocalizedString;
- (id)dimension1LocalizedString;
- (id)dimension2LocalizedString;
- (id)drawingLayerLocalizedString;
- (id)scaleLocalizedString;
- (unsigned short)previousState;
- (unsigned short)state;
- (id)stringForState:(unsigned short)a0;
- (unsigned short)identifier;

@end
