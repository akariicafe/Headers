@class NSArray, NSCalendar, NSDate, NSMutableArray;
@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils;

@interface CUIKSingleDayTimelineLayout : NSObject {
    NSArray *_occurrences;
    unsigned long long _currentOccurrenceIndex;
    id<CUIKSingleDayTimelineViewItem> _currentOccurrence;
    NSMutableArray *_partitions;
    NSMutableArray *_occurrenceBuckets;
    NSMutableArray *_collidingOccurrences;
    NSDate *_startOfDay;
    NSDate *_endOfDay;
    double _startOfDayAbsoluteTime;
    double _endOfDayAbsoluteTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    NSCalendar *_calendar;
    id<CUIKSingleDayTimelineGeometryDelegate> _geometryDelegate;
    id<CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;
}

- (void)_findCollidingOccurrences;
- (double)_topOfOccurrence:(id)a0;
- (void)_initializeFirstGridStripe;
- (void).cxx_destruct;
- (double)_adjustedEndTimeForOccurrence:(id)a0;
- (void)_calculateVerticalFrameAspectsForOccurrence:(id)a0;
- (void)_mergePartitions;
- (id)initWithOccurrences:(id)a0 startOfDay:(id)a1 endOfDay:(id)a2 geometryDelegate:(id)a3 screenUtilsDelegate:(id)a4 calendar:(id)a5;
- (void)_putCollidingOccurrencesIntoBuckets;
- (void)_generateNewPartitions;
- (void)applyLayoutToOccurrences;
- (void)_capVisibleTextForBucket:(id)a0;
- (double)_effectiveEndTimeForOccurrence:(id)a0;
- (void)_popOccurrencesInPartition:(id)a0 endingBeforeTime:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForStartSeconds:(long long)a0 endSeconds:(long long)a1;
- (void)_stampOccurrenceFrames;
- (void)_reclaimSpaceFromStackedOccurrences;
- (BOOL)_inputIsInvalid;
- (BOOL)isRightToLeftLayout;
- (double)_adjustedStartTimeForOccurrence:(id)a0;
- (double)_endOfCollisionZoneForY:(double)a0 occurrence:(id)a1;
- (unsigned long long)_enumerationOptions;
- (double)_combinedWidthOfPartitions;

@end
