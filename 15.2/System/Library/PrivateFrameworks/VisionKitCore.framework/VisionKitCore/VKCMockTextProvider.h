@class NSString, NSMutableArray;

@interface VKCMockTextProvider : NSObject

@property (retain, nonatomic) NSMutableArray *lines;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL isRunningTest;

- (id)characterRangeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)lineForIndex:(unsigned long long)a0;
- (id)allLineQuads;
- (id)smallestSelectableRangeForPosition:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(id)a0 documentView:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)selectionRectsForRange:(id)a0 documentView:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)adjustTextRangeToSelectableRange:(id)a0;
- (id)rangeOfWordForPosition:(id)a0;
- (id)rangeOfLineForPosition:(id)a0;
- (void)loadInfoFromDictionary:(id)a0;
- (id)wordForIndex:(unsigned long long)a0;

@end
