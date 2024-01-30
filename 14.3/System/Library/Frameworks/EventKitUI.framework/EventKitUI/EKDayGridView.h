@class EKCurrentTimeMarkerView, UIVisualEffect, NSString, UIView, UIImageView, NSMutableDictionary, NSMutableArray, UIColor;

@interface EKDayGridView : UIView <EKUITintColorUpdateDelegate, EKCurrentTimeMarkerViewUpdating> {
    double _timeInset;
    double _hourHeight;
    double _timeWidth;
    unsigned char _leftBorder : 1;
    unsigned char _rightBorder : 1;
    int _selected;
    double _fixedDayWidth;
    long long _orientation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastBounds;
    UIColor *_backgroundColor;
    UIView *_leftBorderView;
    NSMutableArray *_middleBorderViews;
    UIView *_rightBorderView;
    NSMutableArray *_gridPatternViews;
    unsigned long long _daysToDisplay;
    UIImageView *_timeDot;
    UIView *_highlightedDayBackground;
    UIView *_fadingHighlightedDayBackground;
    UIView *_gridContainerView;
    NSMutableDictionary *_gridParentViews;
    double _cachedWidthForOffMainThreadWork;
    long long _sizeClass;
    BOOL _needsLayoutInWindow;
}

@property (nonatomic) BOOL showsLeftBorder;
@property (nonatomic) BOOL showsRightBorder;
@property (nonatomic) BOOL rightBorderInsetsOccurrences;
@property (nonatomic) BOOL showsTimeLine;
@property (nonatomic) BOOL showsTimeMarker;
@property (nonatomic) BOOL animatesTimeMarker;
@property (nonatomic) long long timeMarkerDotDay;
@property (nonatomic) double fixedDayWidth;
@property (nonatomic) double eventHorizontalInset;
@property (nonatomic) double hoursToPadTop;
@property (nonatomic) double hoursToPadBottom;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) BOOL usesVibrantGridDrawing;
@property (nonatomic) long long highlightedDayIndex;
@property (readonly, nonatomic) EKCurrentTimeMarkerView *timeMarker;
@property (readonly, nonatomic) double timeWidth;
@property (readonly, nonatomic) double timeInset;
@property (readonly, nonatomic) double topPadding;
@property (readonly, nonatomic) double hourHeight;
@property (readonly, nonatomic) double widthForOccurrences;
@property (retain, nonatomic) UIVisualEffect *gridVisualEffect;
@property (retain, nonatomic) UIView *occurrenceContainerView;
@property (nonatomic) double gridHeightScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cachedBackgroundImageForKey:(id)a0;
+ (void)cacheBackgroundImage:(id)a0 forKey:(id)a1;

- (void)updateMarkerPosition;
- (void)viewTintColorDidChangeForView:(id)a0 toColor:(id)a1;
- (void)tintColorDidChange;
- (void)updateHourHeight;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_sizeClass;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForStartSeconds:(long long)a0 endSeconds:(long long)a1;
- (id)timeDotImage;
- (id)_generateGridImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sizeClass:(long long)a1 backgroundColor:(id)a2 opaque:(BOOL)a3 numberOfDaysToDisplay:(unsigned long long)a4;
- (void)didMoveToWindow;
- (double)positionOfSecond:(long long)a0;
- (double)bottomPadding;
- (void)layoutSubviews;
- (double)_dayWidth;
- (void)_updateTimeMarker;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)secondAtPosition:(double)a0;
- (void)setOrientation:(long long)a0;
- (void)_layoutHighlight;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
