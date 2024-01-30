@class NSArray, NSString;

@interface UISSlotStyle : NSObject <NSCopying, NSSecureCoding> {
    union { unsigned int all; struct { unsigned char accessibilityButtonShapes : 1; unsigned char accessibilityContrast : 1; unsigned char displayRange : 2; unsigned char displayScale : 3; unsigned char layoutDirection : 1; unsigned char legibilityWeight : 1; unsigned char preferredContentSizeCategory : 4; unsigned char userInterfaceIdiom : 3; unsigned char userInterfaceStyle : 1; } ; } _fields;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *assetAppearanceNames;
@property (readonly, nonatomic) long long assetDeviceIdiom;
@property (readonly, nonatomic) long long assetLayoutDirection;
@property (readonly, nonatomic) double assetScaleFactor;
@property (readonly, nonatomic) const struct __CFString { } *fontContentSizeCategory;
@property (readonly, nonatomic) long long fontLegibilityWeight;
@property (readonly, nonatomic) double graphicsDisabledAlpha;
@property (readonly, nonatomic) BOOL hasAccessibilityContentSizeCategory;
@property (readonly, nonatomic) unsigned long long accessibilityButtonShapes;
@property (readonly, nonatomic) unsigned long long accessibilityContrast;
@property (readonly, nonatomic) unsigned long long displayRange;
@property (readonly, nonatomic) unsigned char displayScale;
@property (readonly, nonatomic) unsigned long long layoutDirection;
@property (readonly, nonatomic) unsigned long long legibilityWeight;
@property (readonly, nonatomic) NSString *localization;
@property (readonly, nonatomic) unsigned long long preferredContentSizeCategory;
@property (readonly, nonatomic) struct CGColor { } *tintColor;
@property (readonly, nonatomic) unsigned long long userInterfaceIdiom;
@property (readonly, nonatomic) unsigned long long userInterfaceStyle;

+ (id)slotStyleWithAccessibilityButtonShapes:(unsigned long long)a0 accessibilityContrast:(unsigned long long)a1 displayRange:(unsigned long long)a2 displayScale:(unsigned char)a3 layoutDirection:(unsigned long long)a4 legibilityWeight:(unsigned long long)a5 localization:(id)a6 preferredContentSizeCategory:(unsigned long long)a7 tintColor:(struct CGColor { } *)a8 userInterfaceIdiom:(unsigned long long)a9 userInterfaceStyle:(unsigned long long)a10;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithChangeBlock:(id /* block */)a0;
- (const struct __CTFont { } *)newFontForTextStyle:(struct __CFString { } *)a0 attributes:(const struct __CFDictionary { } *)a1;
- (id)assetGlyphWithName:(id)a0 glyphSize:(long long)a1 glyphWeight:(long long)a2 glyphPointSize:(double)a3;
- (id)assetGlyphWithName:(id)a0 glyphSize:(long long)a1 textStyle:(struct __CFString { } *)a2;
- (unsigned long long)gradeWithOnlyFails:(unsigned long long)a0 allowedLocalizations:(id)a1;
- (id)initWithAccessibilityButtonShapes:(unsigned long long)a0 accessibilityContrast:(unsigned long long)a1 displayRange:(unsigned long long)a2 displayScale:(unsigned char)a3 layoutDirection:(unsigned long long)a4 legibilityWeight:(unsigned long long)a5 localization:(id)a6 preferredContentSizeCategory:(unsigned long long)a7 tintColor:(struct CGColor { } *)a8 userInterfaceIdiom:(unsigned long long)a9 userInterfaceStyle:(unsigned long long)a10;

@end
