@interface CUIRenditionKey : NSObject <NSCopying, NSCoding> {
    struct _renditionkeytoken { unsigned short identifier; unsigned short value; } _stackKey[22];
    struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *_key;
    unsigned short _highwaterKeyCount;
}

@property (nonatomic) long long themeElement;
@property (nonatomic) long long themePart;
@property (nonatomic) long long themeSize;
@property (nonatomic) long long themeDirection;
@property (nonatomic) long long themeValue;
@property (nonatomic) long long themePreviousValue;
@property (nonatomic) long long themeDimension1;
@property (nonatomic) long long themeDimension2;
@property (nonatomic) long long themeState;
@property (nonatomic) long long themePreviousState;
@property (nonatomic) long long themePresentationState;
@property (nonatomic) long long themeLayer;
@property (nonatomic) long long themeScale;
@property (nonatomic) long long themeIdiom;
@property (nonatomic) long long themeSubtype;
@property (nonatomic) long long themeSizeClassHorizontal;
@property (nonatomic) long long themeSizeClassVertical;
@property (nonatomic) long long themeMemoryClass;
@property (nonatomic) long long themeGraphicsClass;
@property (nonatomic) long long themeIdentifier;
@property (nonatomic) long long themeAppearance;
@property (nonatomic) long long themeLocalization;
@property (nonatomic) long long themeDisplayGamut;
@property (nonatomic) long long themeDeploymentTarget;
@property (nonatomic) long long themeGlyphSize;
@property (nonatomic) long long themeGlyphWeight;

+ (void)initialize;
+ (id)renditionKey;
+ (id)renditionKeyWithKeyList:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;

- (id)descriptionBasedOnKeyFormat:(const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)a0;
- (id)nameOfAttributeName:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)keyList;
- (void)setValuesFromKeyList:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeyList:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (id)initWithThemeElement:(long long)a0 themePart:(long long)a1 themeSize:(long long)a2 themeDirection:(long long)a3 themeValue:(long long)a4 themeDimension1:(long long)a5 themeDimension2:(long long)a6 themeState:(long long)a7 themePresentationState:(long long)a8 themeLayer:(long long)a9 themeScale:(long long)a10 themeIdentifier:(long long)a11;
- (void)copyValuesFromKeyList:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (void)dealloc;
- (void)removeValueForKeyTokenIdentifier:(long long)a0;

@end
