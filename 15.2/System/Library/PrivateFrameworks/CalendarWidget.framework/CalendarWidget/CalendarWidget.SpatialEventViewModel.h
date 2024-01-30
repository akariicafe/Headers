@class NSString, NSDate;

@interface CalendarWidget.SpatialEventViewModel : NSObject <CUIKSingleDayTimelineViewItem> {
    void /* unknown type, empty encoding */ event;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lineHeight;
    void /* unknown type, empty encoding */ viewStartDate;
    void /* unknown type, empty encoding */ viewEndDate;
    void /* unknown type, empty encoding */ frame;
    void /* unknown type, empty encoding */ visibleHeight;
    void /* unknown type, empty encoding */ travelTimeHeight;
}

@property (nonatomic) void /* unknown type, empty encoding */ unPinnedViewFrame;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic, readonly) NSDate *startWithTravelTime;
@property (nonatomic, readonly) NSDate *start;
@property (nonatomic, readonly) NSDate *end;
@property (nonatomic) void /* unknown type, empty encoding */ hideTravelTime;
@property (nonatomic, readonly) double enoughHeightForOneLine;
@property (nonatomic, readonly) double viewMaxNaturalTextHeight;
@property (nonatomic) void /* unknown type, empty encoding */ visibleHeightLocked;
@property (nonatomic, readonly) NSString *description;

+ (double)barToBarHorizontalDistanceIncludingBarWidth;

- (void)setTravelTimeHeight:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stagedFrame;
- (void).cxx_destruct;
- (void)setVisibleHeight:(double)a0;
- (id)init;
- (void)setStagedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
