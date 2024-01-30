@class EDProcessors, ESDContainer, EDWarnings, EDWorkbook, EDPageSetup, EDString, EDColorReference, EDHeaderFooter, NSMutableArray, OITSUPointerKeyDictionary;

@interface EDSheet : OCDDelayedNode {
    EDString *mName;
    BOOL mHidden;
    BOOL mDisplayFormulas;
    BOOL mDisplayGridlines;
    EDColorReference *mDefaultGridlineColorReference;
    EDHeaderFooter *mHeaderFooter;
    EDPageSetup *mPageSetup;
    NSMutableArray *mDrawables;
    OITSUPointerKeyDictionary *mTextBoxMap;
    OITSUPointerKeyDictionary *mCommentMap;
    EDProcessors *mProcessors;
    EDWarnings *mWarnings;
    ESDContainer *mEscherDrawing;
}

@property (nonatomic) BOOL isDialogSheet;
@property (readonly, weak) EDWorkbook *workbook;

+ (id)sheetWithWorkbook:(id)a0;

- (void)setup;
- (void)setName:(id)a0;
- (void)teardown;
- (void).cxx_destruct;
- (id)processors;
- (id)drawables;
- (void)dealloc;
- (void)setHidden:(BOOL)a0;
- (unsigned long long)commentCount;
- (id)description;
- (id)name;
- (id)warnings;
- (BOOL)isHidden;
- (id)drawableAtIndex:(unsigned long long)a0;
- (unsigned long long)drawableCount;
- (BOOL)isDisplayGridlines;
- (void)addDrawable:(id)a0;
- (void)applyProcessors;
- (id)initWithWorkbook:(id)a0;
- (void)setDisplayFormulas:(BOOL)a0;
- (void)setDisplayGridlines:(BOOL)a0;
- (void)setDefaultGridlineColorReference:(id)a0;
- (BOOL)isDisplayFormulas;
- (id)headerFooter;
- (void)doneWithNonRowContent;
- (id)defaultGridlineColor;
- (void)setDefaultGridlineColor:(id)a0;
- (void)setHeaderFooter:(id)a0;
- (id)pageSetup;
- (void)setPageSetup:(id)a0;
- (void)removeDrawableAtIndex:(unsigned long long)a0;
- (id)edTextBoxForShape:(id)a0;
- (void)setEDTextBox:(id)a0 forShape:(id)a1;
- (id)edCommentForShape:(id)a0;
- (void)setEDComment:(id)a0 forShape:(id)a1;
- (void)reduceMemoryIfPossible;
- (id)escherDrawing;
- (void)setEscherDrawing:(id)a0;
- (id)defaultGridlineColorReference;
- (id)drawableEnumerator;

@end
