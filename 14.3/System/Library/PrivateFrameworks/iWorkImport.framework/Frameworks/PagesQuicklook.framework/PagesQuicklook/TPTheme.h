@class TSWPParagraphStyle;

@interface TPTheme : TSATheme

@property (readonly, nonatomic) TSWPParagraphStyle *bodyStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *headerAndFooterStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *footnoteStyle;
@property (readonly, nonatomic) BOOL isBasicTheme;
@property (readonly, nonatomic) BOOL isBookPortraitTemplateTheme;

+ (void)initialize;
+ (id)themeWithContext:(id)a0 alternate:(int)a1 withStylesheet:(id)a2;

- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)localizedBodyStyleName;
- (id)_paragraphStylePresetWithName:(id)a0 orContentTag:(id)a1;
- (void)p_saveToArchive:(struct ThemeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ThemeArchive *x4; } *)a0 archiver:(id)a1;

@end
