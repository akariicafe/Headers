@class UIColor, UIFont, NSIndexSet, NSMutableArray;

@interface TSKSegmentedControl : UIControl {
    NSMutableArray *mItems;
    NSMutableArray *mButtonSegments;
    int mStyle;
}

@property (retain, nonatomic) UIColor *selectedTintColor;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) int segmentedControlStyle;
@property (readonly, nonatomic) unsigned long long numberOfSegments;
@property (copy, nonatomic) NSIndexSet *selectedSegmentIndices;
@property (readonly, nonatomic) long long lastPressedSegmentIndex;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (nonatomic) BOOL allowsEmptySelection;
@property (nonatomic) void *userData;

- (id)initWithItems:(id)a0;
- (void)tintColorDidChange;
- (void)sizeToFit;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSegmentedControlStyle:(int)a0;
- (void)setTitle:(id)a0 forSegment:(unsigned long long)a1;
- (void)setImage:(id)a0 forSegment:(unsigned long long)a1;
- (void)setEnabled:(BOOL)a0 forSegment:(unsigned long long)a1;
- (long long)tagForSegment:(unsigned long long)a0;
- (void)setTag:(long long)a0 forSegment:(unsigned long long)a1;
- (id)initWithItems:(id)a0 style:(int)a1;
- (void)tappedSegment:(id)a0;
- (void)p_setSegmentedControlStyle:(int)a0;
- (void)p_updateSegmentProperties;
- (void)p_setSelectedTintColor:(id)a0;
- (void)sizeToFitWidth:(float)a0;
- (id)p_losengeBackgroundImageForButton:(id)a0 item:(id)a1 fillColor:(id)a2;
- (id)p_fullBleedBackgroundImageForButton:(id)a0 item:(id)a1 fillColor:(id)a2;
- (void)p_setButtonAttributedTitle:(id)a0 color:(id)a1 forState:(unsigned long long)a2 button:(id)a3;
- (id)p_backgroundImageForButton:(id)a0 item:(id)a1 fillColor:(id)a2;
- (id)initWithItems:(id)a0 style:(int)a1 target:(id)a2 action:(SEL)a3;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1 forSegment:(unsigned long long)a2;
- (unsigned long long)segmentWithTag:(long long)a0;

@end
