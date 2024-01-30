@class TSWPParagraphStyle;

@interface TPTheme : TSATheme

@property (readonly, nonatomic) TSWPParagraphStyle *bodyStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *headerAndFooterStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *footnoteStyle;
@property (readonly, nonatomic) BOOL isBasicTheme;
@property (readonly, nonatomic) BOOL isBookPortraitTemplateTheme;

+ (void)initialize;
+ (id)themeWithContext:(id)a0 alternate:(unsigned long long)a1 withStylesheet:(id)a2;

- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)localizedBodyStyleName;
- (id)_paragraphStylePresetWithName:(id)a0 orContentTag:(id)a1;
- (void)p_saveToArchive:(void *)a0 archiver:(id)a1;

@end
