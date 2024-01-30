@class NSString;

@interface CATextLayer : CALayer {
    struct CATextLayerPrivate { } *_state;
}

@property (copy) id truncationString;
@property (readonly, getter=isTruncated) BOOL truncated;
@property (copy) id string;
@property const void *font;
@property double fontSize;
@property struct CGColor { } *foregroundColor;
@property (getter=isWrapped) BOOL wrapped;
@property (copy) NSString *truncationMode;
@property (copy) NSString *alignmentMode;
@property BOOL allowsFontSubpixelQuantization;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)needsDisplayForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (BOOL)wrapped;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)CA_validateValue:(id)a0 forKey:(id)a1;
- (id)_createStringDict;
- (struct __CTTypesetter { } *)_retainTypesetter;
- (struct __CTLine { } *)_createTruncationToken;
- (void)_applyLinesToFunction:(void /* function */ *)a0 info:(void *)a1;
- (void)_applyLinesToFunction:(void /* function */ *)a0 info:(void *)a1 truncated:(BOOL *)a2;
- (void)_drawLine:(struct __CTLine { } *)a0 inContext:(struct CGContext { } *)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)_prepareContext:(struct CGContext { } *)a0;
- (id)init;
- (struct CGSize { double x0; double x1; })_preferredSize;
- (id)implicitAnimationForKeyPath:(id)a0;
- (void)dealloc;
- (void)didChangeValueForKey:(id)a0;

@end
