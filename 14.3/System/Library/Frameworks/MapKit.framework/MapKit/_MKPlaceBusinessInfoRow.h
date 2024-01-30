@class NSArray, NSMutableArray, UILayoutGuide;

@interface _MKPlaceBusinessInfoRow : MKPlaceSectionRowView {
    BOOL _needToRecalculateWidth;
    unsigned long long _numberOfColumns;
    NSMutableArray *_labels;
    NSArray *_constraints;
    UILayoutGuide *_leftColumnGuide;
    UILayoutGuide *_rightColumnGuide;
    double _width;
}

@property (retain, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (void)_createConstraints;
- (void)layoutSubviews;
- (void)infoCardThemeChanged;
- (void)_updateFontAndTextColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_contentSizeDidChange;

@end
