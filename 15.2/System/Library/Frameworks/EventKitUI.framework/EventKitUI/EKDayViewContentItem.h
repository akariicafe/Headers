@class EKCalendarDate, EKEvent, EKDayOccurrenceView, NSString, NSDate, EKDayOccurrenceContentPayload, EKDayOccurrenceState;

@interface EKDayViewContentItem : NSObject <CUIKSingleDayTimelineViewItem> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _stagedFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _unPinnedViewFrame;
    double _visibleHeight;
    BOOL _visibleHeightLocked;
    double _travelTimeHeight;
    long long _sizeClass;
    long long _currentRequestId;
    EKDayOccurrenceContentPayload *_stagedPayload;
}

@property (readonly, nonatomic) EKDayOccurrenceState *currentState;
@property (retain, nonatomic) EKEvent *event;
@property (nonatomic) BOOL usesSmallText;
@property (nonatomic) BOOL isProposedTime;
@property (nonatomic) BOOL isLoadingAsync;
@property (readonly, nonatomic) unsigned long long eventIndex;
@property (retain, nonatomic) EKDayOccurrenceView *view;
@property (copy, nonatomic) EKCalendarDate *startDate;
@property (readonly, copy, nonatomic) EKCalendarDate *startDateIncludingTravelTime;
@property (copy, nonatomic) EKCalendarDate *endDate;
@property (nonatomic) double travelTime;
@property (nonatomic) double travelTimeHeight;
@property (nonatomic) double topPinningProximity;
@property (nonatomic) double bottomPinningProximity;
@property (nonatomic) double visibleHeight;
@property (nonatomic) BOOL hasPrecedingDuration;
@property (nonatomic) BOOL hasTrailingDuration;
@property (readonly, nonatomic) NSDate *startWithTravelTime;
@property (readonly, nonatomic) NSDate *start;
@property (readonly, nonatomic) NSDate *end;
@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) BOOL hideTravelTime;
@property (readonly, nonatomic) double enoughHeightForOneLine;
@property (readonly, nonatomic) double viewMaxNaturalTextHeight;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unPinnedViewFrame;
@property (readonly) BOOL visibleHeightLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)barToBarHorizontalDistanceIncludingBarWidth;

- (BOOL)isPinned;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stagedFrame;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setStagedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetVisibleHeight;
- (void)_updateWithPayload:(id)a0;
- (id)initWithEventIndex:(unsigned long long)a0 sizeClass:(long long)a1;
- (void)_requestPayloadAnimated:(BOOL)a0 drawSynchronously:(BOOL)a1;

@end
