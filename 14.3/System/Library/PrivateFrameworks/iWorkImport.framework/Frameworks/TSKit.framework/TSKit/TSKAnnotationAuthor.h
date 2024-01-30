@class NSString, TSUColor;

@interface TSKAnnotationAuthor : TSPObject <TSPCopying> {
    TSUColor *mColor;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *publicID;
@property (nonatomic) BOOL isPublicAuthor;
@property (readonly, nonatomic) BOOL hasPublicID;
@property (readonly, nonatomic) NSString *displayName;
@property (retain, nonatomic) TSUColor *storageColor;
@property (readonly, nonatomic) TSUColor *popoverAuthorLabelColor;
@property (readonly, nonatomic) TSUColor *popoverButtonTintColor;
@property (readonly, nonatomic) TSUColor *textMarkupColor;
@property (readonly, nonatomic) TSUColor *textHighlightColor;
@property (readonly, nonatomic) TSUColor *textHighlightOverlappingDuplicateColor;
@property (readonly, nonatomic) TSUColor *cellViolatorColor;
@property (readonly, nonatomic) TSUColor *flagStrokeColor;
@property (readonly, nonatomic) TSUColor *flagPressedColor;
@property (readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property (readonly, nonatomic) TSUColor *flagFillColor;
@property (readonly, nonatomic) TSUColor *popoverColor;
@property (readonly, nonatomic) TSUColor *sidebarDecoratorLineColor;
@property (readonly, nonatomic) TSUColor *sidebarHoverColor;
@property (readonly, nonatomic) TSUColor *sidebarSelectedColor;
@property (readonly, nonatomic) TSUColor *sidebarUsernameColor;
@property (readonly, nonatomic) TSUColor *sidebarChangeBarColor;
@property (readonly, nonatomic) TSUColor *sidebarSelectedBorderColor;
@property (readonly, nonatomic) TSUColor *gradientStartColor;
@property (readonly, nonatomic) TSUColor *gradientEndColor;
@property (readonly, nonatomic) TSUColor *indicatorLightColor;
@property (readonly, nonatomic) TSUColor *indicatorDarkColor;
@property (readonly, nonatomic) NSString *authorColorName;
@property (readonly, nonatomic) NSString *menuSwatchColorForAuthor;
@property (readonly, nonatomic) BOOL showAuthorComments;

+ (unsigned long long)presetColorCount;
+ (id)authorStorageColorForIndex:(unsigned long long)a0;
+ (id)authorTextMarkupColorForIndex:(unsigned long long)a0;
+ (id)defaultAuthorName;
+ (id)normalizedAuthorNameForAuthorName:(id)a0;
+ (id)p_publicIDFromSeed:(id)a0 privateID:(id)a1;
+ (unsigned long long)p_authorColorIndexWithColor:(id)a0 forIndicator:(BOOL)a1;
+ (id)authorColorForIndex:(unsigned long long)a0 forKey:(id)a1;
+ (id)indicatorLightColorForIndex:(unsigned long long)a0;
+ (id)indicatorDarkColorForIndex:(unsigned long long)a0;
+ (id)localizedAuthorColorNameForIndex:(unsigned long long)a0;
+ (id)p_authorColorDictionaryForAuthorIndex:(unsigned long long)a0;
+ (id)authorMenuSwatchColorForIndex:(unsigned long long)a0;
+ (unsigned long long)authorColorIndexClosestToImportedFloatingCommentColor:(id)a0;
+ (id)indicatorLightColorByAuthorColor:(id)a0;
+ (id)indicatorDarkColorByLightColor:(id)a0;
+ (id)authorNameExplanatoryStringWithUseExplanation:(BOOL)a0 withSettingsExplanation:(BOOL)a1;
+ (void)enumerateAnnotationsInDocument:(id)a0 withAuthor:(id)a1 usingHitBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)componentRootObject;
- (BOOL)allowsImplicitComponentOwnership;
- (unsigned long long)p_authorColorIndex;
- (id)initWithContext:(id)a0 name:(id)a1 color:(id)a2;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)matchesAuthor:(id)a0;
- (BOOL)matchesPrivateID:(id)a0;
- (BOOL)isPreferredOver:(id)a0;
- (id)initWithContext:(id)a0 name:(id)a1 color:(id)a2 privateID:(id)a3;
- (id)initWithContext:(id)a0 name:(id)a1 color:(id)a2 publicID:(id)a3 isPublicAuthor:(BOOL)a4;
- (id)themeFilenameForAuthor;

@end
