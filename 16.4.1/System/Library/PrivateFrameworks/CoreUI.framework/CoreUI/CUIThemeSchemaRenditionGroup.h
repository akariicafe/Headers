@class NSArray, CUIRenditionKey;

@interface CUIThemeSchemaRenditionGroup : NSObject {
    CUIRenditionKey *_baseKey;
    struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } *_part;
}

@property (retain, nonatomic) NSArray *renditions;

+ (id)renditionGroupsForRenditions:(id)a0 part:(struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } *)a1;

- (void)dealloc;
- (id)description;
- (id)baseKey;
- (id)_layerNameForDrawingLayer:(long long)a0;
- (id)_layerNameForState:(long long)a0;
- (id)_renditionsSortedIntoLayers;
- (void)addLayoutMetricsToPSDImageRef:(id)a0 withRendition:(id)a1;
- (void)addStatesAndDrawingLayersToPSDLayers:(id)a0 forPresentationState:(unsigned long long)a1;
- (void)addValueOrDim1LayersToPSDLayers:(id)a0 forPresentationState:(unsigned long long)a1 state:(unsigned long long)a2 drawingLayer:(unsigned long long)a3;
- (id)initWithRenditions:(id)a0 part:(struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } *)a1;
- (id)mutablePSDImageRef;
- (id)mutablePSDImageRefColumnStyle;
- (long long)partFeatures;
- (id)schemaLayersAndLayerGroups;
- (id)themeSchemaLayers;

@end
