@class NSString, TSUColor;

@interface TSKAnnotationAuthor : TSPObject {
    NSString *mName;
    TSUColor *mColor;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TSUColor *storageColor;
@property (readonly, nonatomic) TSUColor *textMarkupColor;
@property (readonly, nonatomic) TSUColor *textHighlightColor;
@property (readonly, nonatomic) TSUColor *cellViolatorColor;
@property (readonly, nonatomic) TSUColor *flagStrokeColor;
@property (readonly, nonatomic) TSUColor *flagPressedColor;
@property (readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property (readonly, nonatomic) TSUColor *flagFillColor;
@property (readonly, nonatomic) TSUColor *popoverColor;

+ (unsigned long long)presetColorCount;
+ (id)authorStorageColorForIndex:(unsigned long long)a0;
+ (id)authorTextMarkupColorForIndex:(unsigned long long)a0;
+ (id)authorTextHighlightColorForIndex:(unsigned long long)a0;
+ (id)authorCellViolatorColorForIndex:(unsigned long long)a0;
+ (id)authorFlagStrokeColorForIndex:(unsigned long long)a0;
+ (id)authorFlagPressedColorForIndex:(unsigned long long)a0;
+ (id)authorChangeAdornmentsColorForIndex:(unsigned long long)a0;
+ (id)authorFlagFillColorForIndex:(unsigned long long)a0;
+ (id)authorPopoverColorForIndex:(unsigned long long)a0;
+ (id)authorColorAppearanceNameForIndex:(unsigned long long)a0;
+ (id)authorColorNameForIndex:(unsigned long long)a0;
+ (id)defaultAuthorName;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)componentRootObject;
- (BOOL)allowsImplicitComponentOwnership;
- (unsigned long long)p_authorColorIndex;
- (id)initWithContext:(id)a0 name:(id)a1 color:(id)a2;

@end
