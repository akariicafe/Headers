@class PDSlideMaster;

@interface PDSlideLayout : PDSlideChild {
    int mSlideLayoutType;
}

@property (weak) PDSlideMaster *slideMaster;

- (id)background;
- (void).cxx_destruct;
- (id)transition;
- (id)description;
- (id)defaultTheme;
- (id)parentSlideBase;
- (void)doneWithContent;
- (int)slideLayoutType;
- (void)setSlideLayoutType:(int)a0;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)initWithSlideMaster:(id)a0;

@end
