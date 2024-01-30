@class CAShapeLayer;

@interface TSWPTOCRep : TSWPShapeRep {
    CAShapeLayer *_selectionHighlightLayer;
}

+ (id)TOCReferenceNameWithParagraphIndex:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)shouldCreateKnobs;
- (BOOL)shouldShowKnobs;
- (id)hyperlinkRegions;
- (BOOL)canMakePathEditable;
- (id)tocInfo;
- (unsigned long long)charIndexAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)paragraphStylesBetweenCharIndex:(unsigned long long)a0 andCharIndex:(unsigned long long)a1;
- (id)i_paragraphStyleAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)indexOfHitTOCEntryAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
