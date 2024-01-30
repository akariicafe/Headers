@class UIView, EKEvent, EKUIVisualEffectView, UIScrollView, EKDayOccurrenceView, NSMutableDictionary, NSMutableArray, UILabel, UIColor;
@protocol EKDayAllDayViewDelegate;

@interface EKDayAllDayView : UIView <EKDayOccurrenceViewDelegate, EKUITintColorUpdateDelegate> {
    long long _orientation;
    NSMutableArray *_occurrenceViews;
    UILabel *_allDay;
    BOOL _allDayLabelHighlighted;
    UIScrollView *_scroller;
    double _occurrenceInset;
    BOOL _allowSelection;
    BOOL _showSelection;
    EKEvent *_selectedEvent;
    BOOL _usesSmallText;
    BOOL _smallTextSettingLocked;
    BOOL _showBirthdayCount;
    long long _birthdayCount;
    long long _targetSizeClass;
    UIView *_dividerLineViewTop;
    UIView *_dividerLineViewBottom;
    EKUIVisualEffectView *_dividerLineSuperview;
    UIColor *_dividerLineVisualEffectColor;
    EKDayOccurrenceView *_birthdayCountOccurrenceView;
    NSMutableDictionary *_temporaryViewCache;
}

@property (weak, nonatomic) id<EKDayAllDayViewDelegate> delegate;
@property (nonatomic) BOOL showsSelection;
@property (nonatomic) BOOL allowsOccurrenceSelection;
@property (nonatomic) BOOL showsBorderLines;
@property (nonatomic) BOOL showsLabel;
@property (nonatomic) BOOL hideOccurrenceBackground;
@property (nonatomic) BOOL forceSingleColumnLayout;
@property (nonatomic) BOOL showBirthdayCountInsteadOfEvents;
@property (readonly, nonatomic) double naturalHeight;
@property (nonatomic) double fixedHeight;
@property (nonatomic) int maxVisibleRows;
@property (retain, nonatomic) EKEvent *dimmedOccurrence;

+ (id)unscaledAllDayFont;
+ (id)allDayLabelBoldFont;
+ (id)allDayLabelFont;

- (id)occurrenceViewForEvent:(id)a0;
- (BOOL)isAllDayLabelHighlighted;
- (void)selectEvent:(id)a0;
- (void)lockUseOfSmallTextToState:(BOOL)a0;
- (void)_saveTemporaryViews;
- (void)_configureOccurrenceViewMarginAndPadding:(id)a0;
- (id)occurrenceViews;
- (void)setAllDayLabelHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sizeClass:(long long)a1;
- (void)viewTintColorDidChangeForView:(id)a0 toColor:(id)a1;
- (void)setTopBorderLineHidden:(BOOL)a0;
- (void)_setUpBirthdayCountViewIfNeeded;
- (double)nextAvailableOccurrenceViewYOrigin;
- (long long)_sizeClass;
- (void).cxx_destruct;
- (void)updateLabelFont;
- (double)_borderLineWidth;
- (void)addViewToScroller:(id)a0;
- (double)firstEventYOffset;
- (void)setDividerLineVisualEffect:(id)a0;
- (id)_selectedCopyView;
- (void)setAllDayLabelColor:(id)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setBorderColor:(id)a0;
- (void)dayOccurrenceViewSelected:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 wasTapped:(BOOL)a2;
- (void)_clearTemporaryViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_height;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_smallTextSettingChanged;
- (void)setOccurrenceInset:(double)a0 labelInset:(double)a1;
- (id)_findSelectedCopySubviewOfView:(id)a0;
- (void)setOrientation:(long long)a0;
- (void)configureOccurrenceViewForGestureController:(id)a0;
- (double)_allDayAreaHeightForEventCount:(long long)a0;
- (id)selectedEvent;
- (void)removeAllOccurrenceViews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setOccurrences:(id)a0;
- (BOOL)containsEvent:(id)a0;

@end
