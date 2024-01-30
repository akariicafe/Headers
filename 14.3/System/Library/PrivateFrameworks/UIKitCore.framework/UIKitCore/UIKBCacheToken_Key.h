@class NSString;

@interface UIKBCacheToken_Key : UIKBCacheToken {
    union { struct { unsigned char idiom : 6; unsigned char landscape : 1; unsigned char split : 1; unsigned char appearance : 8; unsigned char rendering : 8; unsigned char padding : 8; } styling; int intValue; } _style;
    NSString *_cacheDisplayString;
    NSString *_cacheSecondaryDisplayString;
    NSString *_annotationString;
    int _displayTypeHint;
    int _displayRowHint;
    struct CGSize { double width; double height; } _size;
    int _state;
    unsigned long long _clipCorners;
    unsigned long long _groupNeighbors;
    BOOL _usesInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _displayInsets;
}

+ (id)tokenForKey:(id)a0 style:(struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; })a1;
+ (id)tokenForKey:(id)a0 style:(struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; })a1 displayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;

- (BOOL)hasKey;
- (void)setRowHint:(int)a0;
- (void)annotateWithBool:(BOOL)a0;
- (void)annotateWithInt:(int)a0;
- (void)dealloc;
- (void)setStyling:(struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; })a0;
- (int)rowHint;
- (struct CGSize { double x0; double x1; })size;
- (id)string;
- (id)_stringWithAdditionalValues:(id /* block */)a0;
- (id)_initWithKey:(id)a0 style:(struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; })a1 displayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)annotateWithString:(id)a0;
- (struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; })styling;
- (id)stringForRenderFlags:(long long)a0 lightKeyboard:(BOOL)a1;
- (void)resetAnnotations;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (int)displayHint;
- (void)setDisplayHint:(int)a0;

@end
