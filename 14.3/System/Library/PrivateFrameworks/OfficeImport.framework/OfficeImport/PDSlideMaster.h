@class OADTheme, OADTextListStyle, PDPresentation, NSMutableArray, OADColorMap;

@interface PDSlideMaster : PDSlideBase {
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mTitleTextStyle;
    OADTextListStyle *mBodyTextStyle;
    OADTextListStyle *mOtherTextStyle;
}

@property (readonly, weak, nonatomic) PDPresentation *presentation;
@property (retain, nonatomic) NSMutableArray *slideLayouts;
@property (nonatomic) BOOL headerPlaceholderIsVisible;
@property (nonatomic) BOOL footerPlaceholderIsVisible;
@property (nonatomic) BOOL slideNumberPlaceholderIsVisible;
@property (nonatomic) BOOL dateTimePlaceholderIsVisible;

- (id)theme;
- (void).cxx_destruct;
- (id)description;
- (id)colorMap;
- (id)titleTextStyle;
- (id)colorScheme;
- (void)setTitleTextStyle:(id)a0;
- (id)styleMatrix;
- (id)defaultTheme;
- (id)fontScheme;
- (id)parentSlideBase;
- (void)removeUnnecessaryOverrides;
- (id)drawingTheme;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)doneWithContent;
- (id)placeholderWithType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (unsigned long long)slideLayoutCount;
- (id)slideLayoutAtIndex:(unsigned long long)a0;
- (id)addSlideLayout;
- (id)initWithPresentation:(id)a0;
- (id)slideLayoutOfType:(int)a0;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)defaultTextListStyle;
- (void)addSlideLayout:(id)a0;
- (id)bodyTextStyle;
- (id)otherTextStyle;
- (void)setBodyTextStyle:(id)a0;
- (void)setOtherTextStyle:(id)a0;

@end
