@class UIColor, NSArray, UIFont;

@interface UIIndexBarVisualStyle_LegacyiOS : UIIndexBarVisualStyle_Base {
    NSArray *_titles;
    UIFont *_font;
    long long _selectedSection;
    BOOL _pastTop;
    BOOL _pastBottom;
    struct CGSize { double width; double height; } _cachedSize;
    struct CGSize { double width; double height; } _cachedSizeToFit;
    double _topPadding;
    double _bottomPadding;
    double _verticalTextHeightEstimate;
}

@property (copy, nonatomic) UIColor *nonTrackingBackgroundColor;

- (BOOL)overlay;
- (id)font;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canBecomeFocused;
- (id)initWithView:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (long long)_accessibility_indexForEntryAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stride:(double *)a1;
- (void)didDrawEntryAtIndex:(long long)a0 indexBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 entryBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 context:(struct CGContext { } *)a3 originalColor:(id)a4;
- (void)displayEntriesUpdated;
- (id)displayEntryFromEntry:(id)a0;
- (void)indexColorUpdated;
- (double)indexWidth;
- (double)minLineHeight;
- (void)selectedSectionDidChange:(long long)a0;
- (void)sizeUpdated;
- (void)trackingDidBegin;
- (void)trackingDidEnd;
- (BOOL)updateSectionForTouch:(id)a0 withEvent:(id)a1;
- (void)willDrawEntryAtIndex:(long long)a0 indexBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 entryBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 context:(struct CGContext { } *)a3 originalColor:(id)a4;

@end
