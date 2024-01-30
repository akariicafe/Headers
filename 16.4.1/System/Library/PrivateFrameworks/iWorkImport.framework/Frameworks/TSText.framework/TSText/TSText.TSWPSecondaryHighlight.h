@class NSArray;

@interface TSText.TSWPSecondaryHighlight : NSObject <CALayerDelegate> {
    void /* unknown type, empty encoding */ rangeSource;
    void /* unknown type, empty encoding */ color;
    void /* unknown type, empty encoding */ pathStyle;
    void /* unknown type, empty encoding */ layers;
    void /* unknown type, empty encoding */ selectionVisibility;
}

@property (nonatomic, readonly) NSArray *layers;
@property (nonatomic) void /* unknown type, empty encoding */ highlightOrdering;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRanges:(id)a0 color:(struct CGColor { } *)a1 pathStyle:(unsigned long long)a2;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 color:(struct CGColor { } *)a1 pathStyle:(unsigned long long)a2;
- (id)initWithSmartField:(id)a0 color:(struct CGColor { } *)a1 pathStyle:(unsigned long long)a2;
- (void)updateLayersForRep:(id)a0 columns:(id)a1;
- (BOOL)wantsCaretAndSelectionVisibleFor:(id)a0;

@end
