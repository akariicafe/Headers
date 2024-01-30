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

- (BOOL)canBecomeFocused;
- (id)initWithView:(id)a0;
- (id)font;
- (void).cxx_destruct;
- (id)displayEntryFromEntry:(id)a0;
- (BOOL)overlay;
- (void)indexColorUpdated;
- (long long)_accessibility_indexForEntryAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)updateSectionForTouch:(id)a0 withEvent:(id)a1;
- (void)displayEntriesUpdated;
- (double)minLineHeight;
- (void)sizeUpdated;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stride:(double *)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
