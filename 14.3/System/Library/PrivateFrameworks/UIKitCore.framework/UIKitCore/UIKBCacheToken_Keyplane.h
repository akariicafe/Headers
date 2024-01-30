@class NSString;

@interface UIKBCacheToken_Keyplane : UIKBCacheToken {
    struct CGSize { double width; double height; } _size;
    union { struct { unsigned char idiom : 6; unsigned char landscape : 1; unsigned char split : 1; unsigned char appearance : 8; unsigned char rendering : 8; unsigned char padding : 8; } styling; int intValue; } _style;
    NSString *_geometrySetName;
    NSString *_keySetName;
    NSString *_cachedGestureKeySetName;
    NSString *_annotations;
    NSString *_locale;
}

+ (id)tokenForKeyplane:(id)a0;

- (id)stringForSplitState:(BOOL)a0 handBias:(long long)a1;
- (void)annotateWithBool:(BOOL)a0;
- (void)annotateWithInt:(int)a0;
- (void)dealloc;
- (void)setStyling:(struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; })a0;
- (struct CGSize { double x0; double x1; })size;
- (id)_initWithKeyplane:(id)a0 keylayout:(id)a1;
- (struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; })styling;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isUsableForCacheToken:(id)a0 withRenderFlags:(long long)a1;

@end
