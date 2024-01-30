@interface StocksUI.IconTextAttachment : NSTextAttachment {
    void /* unknown type, empty encoding */ baselineAdjustment;
    void /* unknown type, empty encoding */ imageHeightOverride;
}

- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(long long)a3;
- (id)initWithData:(id)a0 ofType:(id)a1;

@end
