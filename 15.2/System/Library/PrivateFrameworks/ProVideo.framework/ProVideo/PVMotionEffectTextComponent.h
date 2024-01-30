@class NSArray, NSNumber;

@interface PVMotionEffectTextComponent : PVMotionEffectComponent <PVEffectTextual> {
    void *_textObjectIDs;
    NSArray *_defaultAttributedStrings;
    NSNumber *_hasEmojiRenderingWorkaround;
    NSNumber *_isTitleCard;
}

+ (id)motionEffectPropertyKeyToPublishedParameterNameMap;

- (int)orientation;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isTextFlipped;
- (BOOL)supportsFlippingText;
- (BOOL)supportsOrientation;
- (id)defaultAttributedString:(unsigned long long)a0;
- (struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })textCornersAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 index:(unsigned long long)a1 forcePosterFrame:(BOOL)a2 includeDropShadow:(BOOL)a3 scale:(struct CGPoint { double x0; double x1; })a4 viewSize:(struct CGSize { double x0; double x1; })a5 viewOrigin:(int)a6;
- (id)textEditingBoundsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 useParagraphBounds:(BOOL)a2 includeDropShadow:(BOOL)a3 includeMasks:(BOOL)a4;
- (void)beginTextEditing;
- (void)endTextEditing;
- (id)textTransformsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 viewSize:(struct CGSize { double x0; double x1; })a2 viewOrigin:(int)a3;
- (id)textEditingBounds:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)textTransformsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 includeTransformAnimation:(BOOL)a2 viewSize:(struct CGSize { double x0; double x1; })a3 viewOrigin:(int)a4;
- (void)beginEditingTextAtIndex:(unsigned int)a0;
- (void)endEditingTextAtIndex:(unsigned int)a0;
- (BOOL)isTitleCard;
- (id)initWithMotionEffect:(id)a0;
- (void)motionEffect:(id)a0 didBecomeReady:(const void *)a1 properties:(id)a2;
- (void)motionEffectDidUnload:(id)a0;
- (BOOL)motionEffect:(id)a0 propertiesDisableCache:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 forcePosterFrame:(BOOL)a3;
- (id)motionEffectPropertyKeysThatInvalidateCachedRender:(id)a0;
- (BOOL)motionEffect:(id)a0 shouldInvalidateCachedRenderForProperty:(id)a1 oldValue:(id)a2 newValue:(id)a3;
- (void *)_textObjectIDs:(const void *)a0;
- (void)disableRenderingTextObjectAtIndex_NoLock:(unsigned int)a0 documentInfo:(const void *)a1;
- (void)enableRenderingTextObjectAtIndex_NoLock:(unsigned int)a0 documentInfo:(const void *)a1;
- (BOOL)hasEmojiRenderingWorkaround;
- (void)setIsRightToLeft_NoLock:(BOOL)a0 documentInfo:(const void *)a1;
- (void)effect:(id)a0 updateProperties:(id)a1 allProperties:(id)a2;
- (void)setupTitleParameters:(id)a0 allProperties:(id)a1 documentInfo:(const void *)a2;
- (void)motionEffect:(id)a0 willOpenMedia:(const void *)a1 properties:(id)a2;
- (void)storeDefaultStrings:(const void *)a0;
- (BOOL)isRightToLeftWithCurrentLocale;

@end
