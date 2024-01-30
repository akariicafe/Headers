@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {
    WDTableProperties *mTableProperties;
    WDCharacterProperties *mCharacterProperties;
    unsigned char mOriginal : 1;
    unsigned char mTracked : 1;
    unsigned char mResolved : 1;
    struct { short widthBefore; int widthBeforeType; short widthAfter; int widthAfterType; long long height; int heightType; unsigned char widthBeforeOverridden : 1; unsigned char widthBeforeTypeOverridden : 1; unsigned char widthAfterOverridden : 1; unsigned char widthAfterTypeOverridden : 1; unsigned char heightOverridden : 1; unsigned char heightTypeOverridden : 1; unsigned char header : 1; unsigned char headerOverridden : 1; } mOriginalProperties;
    struct { short widthBefore; int widthBeforeType; short widthAfter; int widthAfterType; long long height; int heightType; unsigned char widthBeforeOverridden : 1; unsigned char widthBeforeTypeOverridden : 1; unsigned char widthAfterOverridden : 1; unsigned char widthAfterTypeOverridden : 1; unsigned char heightOverridden : 1; unsigned char heightTypeOverridden : 1; unsigned char header : 1; unsigned char headerOverridden : 1; } mTrackedProperties;
}

- (void)setHeader:(BOOL)a0;
- (BOOL)header;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHeight:(long long)a0;
- (void)addProperties:(id)a0;
- (id)initWithDocument:(id)a0;
- (long long)height;
- (id)description;
- (id)characterProperties;
- (BOOL)isHeightOverridden;
- (id)tableProperties;
- (void)setResolveMode:(int)a0;
- (int)resolveMode;
- (void)addPropertiesValues:(struct { short x0; int x1; short x2; int x3; long long x4; int x5; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; } *)a0 to:(struct { short x0; int x1; short x2; int x3; long long x4; int x5; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; } *)a1;
- (short)widthBefore;
- (void)setWidthBefore:(short)a0;
- (BOOL)isWidthBeforeOverridden;
- (int)widthBeforeType;
- (void)setWidthBeforeType:(int)a0;
- (BOOL)isWidthBeforeTypeOverridden;
- (short)widthAfter;
- (void)setWidthAfter:(short)a0;
- (BOOL)isWidthAfterOverridden;
- (int)widthAfterType;
- (void)setWidthAfterType:(int)a0;
- (BOOL)isWidthAfterTypeOverridden;
- (int)heightType;
- (void)setHeightType:(int)a0;
- (BOOL)isHeightTypeOverridden;
- (BOOL)isHeaderOverridden;

@end
