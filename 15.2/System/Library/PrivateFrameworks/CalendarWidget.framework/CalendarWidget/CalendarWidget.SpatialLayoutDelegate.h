@interface CalendarWidget.SpatialLayoutDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils> {
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
    void /* unknown type, empty encoding */ startHourToShow;
    void /* unknown type, empty encoding */ endHourToShow;
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ calendar;
    void /* unknown type, empty encoding */ hoursInDay;
    void /* unknown type, empty encoding */ secondsInDay;
    void /* unknown type, empty encoding */ secondsInMinute;
    void /* unknown type, empty encoding */ secondsInHour;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ displayedRect;
@property (nonatomic, readonly) double hourHeight;
@property (nonatomic) void /* unknown type, empty encoding */ topPadding;
@property (nonatomic, readonly) double timeWidth;
@property (nonatomic) void /* unknown type, empty encoding */ originIsUpperLeft;

- (struct CGPoint { double x0; double x1; })pointForDate:(double)a0;
- (double)RoundToScreenScale:(double)a0;
- (double)dateForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
