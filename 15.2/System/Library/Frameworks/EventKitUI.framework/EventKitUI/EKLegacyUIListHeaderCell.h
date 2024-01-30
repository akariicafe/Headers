@class EKLegacyUIListHeaderCellContentView;

@interface EKLegacyUIListHeaderCell : UITableViewHeaderFooterView {
    EKLegacyUIListHeaderCellContentView *_contentView;
}

@property (nonatomic) double date;
@property (nonatomic) BOOL indentsForDots;
@property (readonly, nonatomic) BOOL reusable;
@property (nonatomic) BOOL showWeekNumber;

+ (id)_noonLocalizedString;
+ (id)_allDayLocalizedString;
+ (void)_invalidateWidths;
+ (void)_calculateWidths;
+ (double)xMidpointForCalendarDot;
+ (double)timeWidthIncludingDots:(BOOL)a0;

- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 date:(double)a1;

@end
